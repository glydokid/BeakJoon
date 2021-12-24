include <stdio.h>
int main() {
	int num1, num2, n;

	scanf("%d", &n);


	for (int i = 1; i <= n; ++i) {
		scanf("%d %d", &num1, &num2);

		if (num1 < 10 && num2 < 10)
			printf("Case #%d: %d\n", i, num1 + num2);
	}


	return 0;
}