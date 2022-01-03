#include <stdio.h>
#include <string.h>

int NUM(int n);

int main(void) {

	int sum = 0;
	char word[15];

	scanf("%s", word);

	int len = strlen(word);

	for (int i = 'A'; i <= 'Z'; i++) {

		for (int j = 0; j < len; j++) {
			if (i == word[j])
				sum += NUM(i);
		}
	}

	printf("%d", sum);
	return 0;
}

int NUM(int n) {

	switch (n) {
	case 'A':
	case 'B':
	case 'C':
		return 3;

	case 'D':
	case 'E':
	case 'F':
		return 4;

	case 'G':
	case 'H':
	case 'I':
		return 5;

	case 'J':
	case 'K':
	case 'L':
		return 6;

	case 'M':
	case 'N':
	case 'O':
		return 7;

	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return 8;

	case 'T':
	case 'U':
	case 'V':
		return 9;

	default:
		return 10;
	}

}