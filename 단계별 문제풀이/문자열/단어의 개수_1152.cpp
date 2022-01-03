#include <stdio.h>
#include <string.h>

int main(void) {

	int i, count = 0, len;
	char word[1000000];

	scanf("%[^\n]", word); // 엔터가 나올때까지 문자열을 받음(공백 포함)
	len = strlen(word);

	if (len == 1) { //공백 하나만 입력시 예외문 처리
		if (word[i] == ' ') {
			printf("0\n");
			return 0;
		}
	}

	for (i = 1; i < len-1; i++) {
		if (word[i] == ' ')
			count++;
	}

	printf("%d", count + 1);

	return 0;

}