#include <stdio.h>
int main(void)
{
	int score[8] = { 0, }; //�Է¹��� ���� �迭
	int max = 0;
	int high = 0; //���� 5�� ���� ��
	int a = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 8; j++) {

			if (max < score[j]) {
				max = score[j];
				a = j;
			}
		}

		high += max; //���� ū ������ �ϳ��� ����
		score[a] -= 1000; //max�� �ش� �Ǵ� �迭���� -�� ǥ���ؼ� �ڸ��� Ȯ��
		max = 0;
	}

	printf("%d\n", high);

	for (int i = 0; i < 8; i++) {
		if (score[i] < 0) {
			printf("%d ", i + 1);
		}
	}
}