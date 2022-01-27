#include <stdio.h>

int main() {
	
	int in, out;
	int count = 0;
	int max = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &out, &in);

		if (i == 0)
			out = 0;

		count = count - out;
		count = count + in;

		if (max < count)
			max = count;
	}

	printf("%d", max);

}