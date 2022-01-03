#include <stdio.h>
#include <string.h>

int main() {

	char word[1000000]; //최대 단어길이
	int count[26] = {0}; //알파벳의 길이
	int len;
	int result = 0; //단어 중복 누적
	int number; //배열의 값
	int select =0; //최다 사용 단어 저장

	scanf("%s", word);

	len = strlen(word);

	for (int i = 0; i < len; i++) {

		if (word[i] >= 'A' && word[i] <= 'Z')
			number = (word[i] - 'A'); //아스키코드 값상 대문자 A를 빼면 0~26사이 값이 저장
		
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
