#include <stdio.h>

int main(void) {
	int arr[1000];
	int size;
	double max_score = 0.0;
	double avg_score = 0.0;

	scanf("%d", &size);


	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);

		if (max_score < arr[i])
			max_score = arr[i];
	}

	for (int i = 0; i < size; i++) {
		avg_score += (double)arr[i] / max_score * 100.0;
	}

	printf("%.2lf", (avg_score / (double)size));

	return 0;