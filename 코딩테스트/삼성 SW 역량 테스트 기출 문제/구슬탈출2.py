from collections import deque
import sys
input = sys.stdin.readline # 빠른 입출력 위한 코드
 
n, m = map(int, input().split())
graph = []
for i in  range(n):
    graph.append(list(input()))
    for j in range(m):
        if graph[i][j] == 'R': # 입력값에서 빨간구슬 위치 찾아서 지정
            rx, ry = i, j
        elif graph[i][j] == 'B': # 입력값에서 파란구슬 위치 찾아서 지정
            bx, by = i, j

#x, y 축으로 이동하기
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(rx, ry, bx, by):
    q = deque()
    q.append((rx, ry, bx, by))
    visited = [] # 방문한 좌표를 저장하여 중복을 판단하기 위한 리스트
    visited.append((rx, ry, bx, by))
    count  = 0
    while q:
        for _ in range(len(q)):
            rx, ry, bx, by = q.popleft() # 받은 위치값들을 지정
            
            if count > 10: # count가 10회 초과되면 -1 출력
                print(-1)
                return
            if graph[rx][ry] == 'O': #현재 빨간구슬의 위치가 O라면 count 출력
                print(count)
                return
            
            for i in range(4): # 4방향 탐색하기
                next_rx, next_ry = rx, ry
                next_bx, next_by = bx, by
                
                #빨간구슬 탐색
                while True: # 무한반복으로 #아니면 O가 나올때 까지 움직임
                    next_rx += dx[i]
                    next_ry += dy[i]
                    if graph[next_rx][next_ry] == '#': # #벽인 경우 한칸 뒤로 이동
                        next_rx -= dx[i]
                        next_ry -= dy[i]
                        break
                    if graph[next_rx][next_ry] == 'O': # O출구인 경우 멈춤
                        break
                
                #파란구슬 탐색
                while True:
                    next_bx += dx[i]
                    next_by += dy[i]
                    if graph[next_bx][next_by] == '#':
                        next_bx -= dx[i]
                        next_by -= dy[i]
                    if graph[next_bx][next_by] == 'O':
                        break
                    
                if graph[next_bx][next_by] == 'O': # 파란구슬이 먼저 구멍에 들어가거나 동시에 들어가면 안됨 따라서 이 경우 무시
                    continue
                
                if nrx == nbx and nry == nby: # 두 구슬의 위치가 같다면
                    if abs(nrx - rx) + abs(nry - ry) > abs(nbx - bx) + abs(nby - by): # 더 많이 이동한 구슬이 더 늦게 이동한 구슬이므로 늦게 이동한 구슬 한칸 뒤로 이동
                        nrx -= dx[i]
                        nry -= dy[i]
                    else:
                        nbx -= dx[i]
                        nby -= dy[i]
                        
                if (nrx, nry, nbx, nby) not in visited: # 방문해본적이 없는 위치라면 새로 큐에 추가 후 방문 처리
                    q.append((nrx, nry, nbx, nby))
                    visited.append((nrx, nry, nbx, nby))
        count += 1
        
    print(-1) # 10회가 초과하지 않았지만 10회 내에도 구멍에 들어가지 못하는 경우
    
bfs(rx, ry, bx, by)
 
