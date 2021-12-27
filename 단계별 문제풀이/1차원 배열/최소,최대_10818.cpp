#include<stdio.h>

int main() {

	int A, Max = -1000000, Min = 1000000;
	int arr[1000000];

	scanf("%d", &A);

	for (int i = 0; i < A; ++i) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < A; ++i) {

		if (Max < arr[i])
			Max = arr[i];

		if (Min > arr[i])
			Min = arr[i];
	}

	printf("%d %d", Min, Max);

	return 0;
}