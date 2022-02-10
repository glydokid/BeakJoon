#include <stdio.h>

int main(void)
{
	int burger[3] = {0, }; //상덕버거, 중덕버거, 하덕버거
	int drink[2] = {0, }; //콜라, 사이다
	int burger_min = 0;
	int drink_min = 0;
	int min = 2001;


	for (int i = 0; i < 3; i++) {
		scanf("%d", &burger[i]);
	}

	for (int i = 0; i < 2; i++) {
		scanf("%d", &drink[i]);
	}

	for (int i = 0; i < 3; i++) {
		if (min > burger[i]) {
			min = burger[i];
			burger_min = burger[i];
		}
	}

	min = 2001;

	for (int i = 0; i < 2; i++) {
		if (min > drink[i]) {
			min = drink[i];
			drink_min = drink[i];
		}
	}

	printf("%d", (burger_min + drink_min - 50));

	return 0;
}