#include <stdio.h>
int main() {
	int A, B;

	scanf("%d %d", &A, &B); //두 수를 입력

	// 두 수 비교 후 출력
	if (A > B) {
		printf(">");
	}
	else if (A < B) {
		printf("<");
	}
	else if (A == B) {
		printf("==");
	}

	return 0;
}