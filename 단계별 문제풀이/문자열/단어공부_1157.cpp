#include <stdio.h>
#include <string.h>

int main() {

	char word[1000000]; //�ִ� �ܾ����
	int count[26] = {0}; //���ĺ��� ����
	int len;
	int result = 0; //�ܾ� �ߺ� ����
	int number; //�迭�� ��
	int select =0; //�ִ� ��� �ܾ� ����

	scanf("%s", word);

	len = strlen(word);

	for (int i = 0; i < len; i++) {

		if (word[i] >= 'A' && word[i] <= 'Z')
			number = (word[i] - 'A'); //�ƽ�Ű�ڵ� ���� �빮�� A�� ���� 0~26���� ���� ����
		
		else if(word[i]>='a' && word[i] <= 'z')
			number = (word[i] - 'a');

		count[number]++;
	} 

	int max = count[0];

	for (int i = 1; i < 26; i++) {
		if (max < count[i])
			max = count[i], select = i;
	}

	for (int i = 0; i < 26; i++) {
		if (max == count[i]) 
			result++; 
	}

		if (result > 1) 
			printf("?\n"); 
		else
			printf("%c", select + 'A');

		return 0;
}
