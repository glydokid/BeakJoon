﻿#include <stdio.h>
int main() {
	int a, b, i, n;

	scanf("%d", &n);

	for (i = 1; i <= n; ++i) {
		scanf("%d %d\n", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}