#include <stdio.h>

int number, d, t; // number �� ����� �м�, d�� �밢�� ��ġ 

int main() {
    scanf("%d", &number);   // ����� �Է°� �ޱ�

    for (; d * (d + 1) / 2 < number; d++) {  // �밢�� �ϳ��� ���ڰ� 1���� �����ؼ� ��� ���ڵ��� ������ �����༭ ���° �밢���� ����� �Է°��� �ִ��� Ȯ��
    }

    t = number - d * (d - 1) / 2;  //  t�� �밢���ȿ� ����� �м����� ã�Ƴ��� ����
      // 14   -  5 * (4) /2 = 14 - 10 = ( t = 4 )

    if (d % 2 == 0) {  // ¦����° �밢���� ������ �Ʒ�
        printf("%d/%d", t, d - t + 1);
    }

    else   // Ȧ����° �밢���� �Ʒ����� ������
        printf("%d/%d", d - t + 1, t);

    return 0;
}