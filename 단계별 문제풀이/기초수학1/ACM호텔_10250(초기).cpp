#include <stdio.h>

int main() {

	int H, W, N; // ����, ����, ����
	int T; // �׽�Ʈ ���̽�

	scanf("%d\n", &T);

	for (int i = 0; i < T; i++) { //�׽�Ʈ ���̽�

		int number = 101;
		int count = 1;

		scanf("%d %d %d", &H, &W, &N);

		for (int i = 1; i <= W; i++) {

			for (int j = 0; j < H; j++) {

				if (count == N) //������ŭ �ݺ��ϸ� �ݺ��� ������
					goto EXIT;

				number = number + 100; //101ȣ���� 201ȣ...������

				if (number / H == 100) { //���� ���� ���� �����ϸ� �ٽ� 1������ ����
					number = (number / H) + i + 1; 
				}
				count++;
			}

			number = number - 100;
		}
	EXIT:
		printf("%d\n", number);
	}
	return 0;
}