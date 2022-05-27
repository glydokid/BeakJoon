#include <stdio.h>
#include <string.h>

int main(void) {

	char A[4], B[4], temp;

	scanf("%s %s", A, B);

	temp = A[2];
	A[2] = A[0];
	A[0] = temp;

	temp = B[2];
	B[2] = B[0];
	B[0] = temp;

	if (strcmp(A, B) > 0)
		printf("%s", A);
	else
		printf("%s", B);

	return 0;
}