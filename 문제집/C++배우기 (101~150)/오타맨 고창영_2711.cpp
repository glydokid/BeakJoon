#include <stdio.h>
int main(void)
{
	int T;
	int error;
	char A[80] = { 0, };

	scanf("%d", &T); //테스트 케이스 입력

	for (int i = 0; i < T; i++) {
		scanf("%d", &error);
		scanf("%s", A);

		error -= 1;

		for (int j = 0; j < 80; j++) {
			A[error] = A[error + 1];

			error++;

			if (A[error] == 0)
				break;
		}

	printf("%s\n", A);
	}

}