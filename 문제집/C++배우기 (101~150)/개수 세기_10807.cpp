#include <stdio.h>
int main(void)
{
	int N; //���� ����
	int input[100]; //���� �迭
	int V; // ã������ ����
	int count = 0; //ī��Ʈ

	scanf("%d", &N);
	
	//���� ������ŭ input�迭�� �Է�
	for (int i = 0; i < N; i++) {
		scanf("%d", &input[i]);
	}

	scanf("%d", &V);

	//input ������ �ϳ��� V�� �� �� ������ ī��Ʈ ����
	for (int i = 0; i < N; i++) {
		if (V == input[i]) {
			count++;
		}
	}

	printf("%d", count);
}