#include <stdio.h>

int main(void) {
	int  index[10], result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &index[i]);
		index[i] = index[i] % 42;
	}

	for (int i = 0; i < 10; i++) {

		int count = 0;
		for (int j = 0; j < i; j++) {

			if (index[i] == index[j])
				count++;
		}
		if (count == 0)
			result++;

	}

	printf("%d", result);

	return 0;
}