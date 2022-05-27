#include <stdio.h>
int main() {
	int a, sum = 0;

	scanf("%d", &a); // 숫자 입력

	for (int i = 1; i <= a; ++i) {
		sum += 1;
		printf("%d\n", sum);
	}
}