#include <stdio.h>
int main(void)
{
	int N; //정수 갯수
	int input[100]; //정수 배열
	int V; // 찾으려는 정수
	int count = 0; //카운트

	scanf("%d", &N);
	
	//정수 갯수만큼 input배열에 입력
	for (int i = 0; i < N; i++) {
		scanf("%d", &input[i]);
	}

	scanf("%d", &V);

	//input 베열을 하나씩 V와 비교 후 같으면 카운트 증가
	for (int i = 0; i < N; i++) {
		if (V == input[i]) {
			count++;
		}
	}

	printf("%d", count);
}