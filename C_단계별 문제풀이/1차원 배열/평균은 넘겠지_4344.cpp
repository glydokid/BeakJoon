#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Test_Case, St_Case, St_sum = 0;
	int score[10000];
	double avg = 0.0, over_avg = 0.0;

	scanf("%d", &Test_Case);

	for (int i = 0; i < Test_Case; ++i) {
		scanf("%d", &St_Case);

		for (int j = 0; j < St_Case; j++) {
			scanf("%d", &score[j]);
			St_sum += score[j];
		}

		avg = ((double)St_sum / St_Case);

		for (int k = 0; k < St_Case; k++) {
			if (avg < score[k])
				over_avg++;
		}

		over_avg = over_avg / St_Case*100;

		printf("%.3lf%%\n", over_avg);

		St_sum = 0;
		over_avg = 0;
	}
	return 0;

}