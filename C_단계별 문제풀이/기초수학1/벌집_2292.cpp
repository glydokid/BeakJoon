#include<stdio.h>

int main(void) {
	int n;
	int i = 2, j = 5;
	int count = 2;

	scanf("%d", &n);

	if (n == 1) {
		printf("%d", 1);
		return 0;
	}

	while (1) {
		if (i <= n && i + j >= n) {
			printf("%d", count);
			break;
		}
		i = i + j + 1;
		j += 6;
		count++;
	}
}