#include <stdio.h>
int main() {
	int a, sum;

	scanf("%d", &a);

	sum = a + 1;

	for (int i = 1; i <= a; ++i) {
		sum -= 1;
		printf("%d\n", sum);
	}
}