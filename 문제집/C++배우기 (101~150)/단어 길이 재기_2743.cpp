#include <stdio.h>

int main() {

	char A[100] = { 0, };
	int count = 0;

	scanf("%s", &A);

	for (int i = 0; i < 100; i++) {
		
		if (A[i] == 0) {
			break;
		}

		count++;
	}

	printf("%d", count);
}