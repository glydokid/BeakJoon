#include <stdio.h>
int main(void)
{
	int score[8] = { 0, }; //입력받은 숫자 배열
	int max = 0;
	int high = 0; //상위 5개 숫자 합
	int a = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 8; j++) {

			if (max < score[j]) {
				max = score[j];
				a = j;
			}
		}

		high += max; //가장 큰 값들을 하나씩 저장
		score[a] -= 1000; //max에 해당 되는 배열값을 -로 표시해서 자릿수 확인
		max = 0;
	}

	printf("%d\n", high);

	for (int i = 0; i < 8; i++) {
		if (score[i] < 0) {
			printf("%d ", i + 1);
		}
	}
}