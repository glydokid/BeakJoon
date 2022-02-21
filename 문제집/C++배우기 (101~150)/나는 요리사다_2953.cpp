#include <stdio.h>
int main(void)
{	
	int score = 0;
	int number = 0;
	int A[5][5] = {
		{0, },
		{0, }
	};

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 4; j++) {
			scanf("%d", &A[i][j]);
			
			A[i][4] += A[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {

		if (A[i][4] > score) {

			score = A[i][4];
			number = i+1;
	
		}
	}

	printf("%d %d", number, score);
}