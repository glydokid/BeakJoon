#include <stdio.h>
#include <string.h>

int main(void) {

	int i, count = 0, len;
	char word[1000000];

	scanf("%[^\n]", word); // ���Ͱ� ���ö����� ���ڿ��� ����(���� ����)
	len = strlen(word);

	if (len == 1) { //���� �ϳ��� �Է½� ���ܹ� ó��
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