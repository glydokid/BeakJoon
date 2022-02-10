#include <stdio.h>

int main(void)
{
	int number[5] = { 0, };
	int C_number[5] = { 0, };
	int average = 0;
	int min = 101;
	int a;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < 5; i++) {
		average += number[i];
	}

	average = (average / 5);

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			if (min > number[j]) {
				min = number[j];
				a = j;
			}
		}

		C_number[i] = number[a];
		min = 101;
		number[a] += 100;
	
	}

	printf("%d\n", average);
	printf("%d", C_number[2]);
	
	return 0;
}