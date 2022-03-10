#include <stdio.h>

int main() {

	int W[10];
	int K[10];
	int temp;

	for (int i = 0; i < 10; i++) {
		scanf("%d\n", &W[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d\n", &K[i]);

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 8; j++) {
			if (W[j] < W[j + 1]) {

				temp = W[j];
				W[j] = W[j + 1];
				W[j + 1] = temp;

			}
		}
	}

	}

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 8; j++) {
			if (K[j] < K[j + 1]) {

				temp = K[j];
				K[j] = K[j + 1];
				K[j + 1] = temp;

			}
		}
	}
	printf("%d\n", W[0] + W[1] + W[2]);
	printf("%d", K[0] + K[1] + K[2]);


}