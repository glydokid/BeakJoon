#include <stdio.h>
int main(void)
{
	int arr[10000];

	int S = 0; // 시작 자리
	int T; // 마지막 자리
	int a = 0; //수열 자리
	int sum = 0; // 합
	int count = 0;

	scanf("%d %d", &S, &T);

	for (int i = 1; i <= T; i++) {

		for (int j = 0; j < i; j++) {
			arr[a] = i;

			a++;
			count++;

			if (count == T)
				break;
		}
	}


	for (S; S <= T; S++) {
		sum += arr[S - 1];
	}

	printf("%d", sum);

}