#include <stdio.h>
#include <string.h>

int main(void) {
	int a, add, sum;
	char arr[81];

		scanf("%d", &a);

	for (int i = 0; i < a; i++) {

		scanf("%s", arr);

		add = 1;
		sum = 0;

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += add;
				add ++  ;
			}
			else add = 1;
		}
		printf("%d\n", sum);
	}

	return 0;
}