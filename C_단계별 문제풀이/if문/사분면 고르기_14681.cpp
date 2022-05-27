#include <stdio.h>
int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2); //두 수를 입력

	//두 수를 양수와 정수로 구분하여 사분면 지정
	if ((-1000 <= num1 <= 1000 && num1 != 0) && (-1000 <= num2 <= 1000 && num2 != 0)) { //두 수는 -1000이상 1000이하
		if (num1 > 0 && num2 > 0)
			printf("1");
		else if (num1 < 0 && num2 > 0)
			printf("2");
		else if (num1 < 0 && num2 < 0)
			printf("3");
		else if (num1 > 0 && num2 < 0)
			printf("4");
	}

	return 0;
}