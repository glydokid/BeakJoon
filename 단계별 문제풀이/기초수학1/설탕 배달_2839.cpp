#include <stdio.h>

int main() {
	
	int N;
	int count = 0;

	scanf("%d", &N);

	while (1) {
		if (N % 5 == 0) {
			printf("%d", count + (N / 5));
			break;
		}


		N = N - 3;
		count++;

		if (N < 0) {
			printf("-1");
			break;
		}
	}
}