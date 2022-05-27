#include <stdio.h>

int main() {

	int H, W, N; // 높이, 길이, 순번
	int T; // 테스트 케이스

	scanf("%d\n", &T);

	for (int i = 0; i < T; i++) { //테스트 케이스

		int number = 101;
		int count = 1;

		scanf("%d %d %d", &H, &W, &N);

		for (int i = 1; i <= W; i++) {

			for (int j = 0; j < H; j++) {

				if (count == N) //순번만큼 반복하면 반복문 나가기
					goto EXIT;

				number = number + 100; //101호부터 201호...순으로

				if (number / H == 100) { //가장 높은 층에 도착하면 다시 1층부터 시작
					number = (number / H) + i + 1; 
				}
				count++;
			}

			number = number - 100;
		}
	EXIT:
		printf("%d\n", number);
	}
	return 0;
}