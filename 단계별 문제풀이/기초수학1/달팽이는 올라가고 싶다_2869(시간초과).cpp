#include <stdio.h>

int main() {

    int A, B, V; //�ö󰡴� ����, �������� ����, ���� ����
    int result = 0;
    int day = 0;

    scanf("%d %d %d", &A, &B, &V);

    while (1) {
        result =result + A - B; //�Ϸ翡 �ö� �� �ִ� ����

        day++;

        if (result + A >= V) // ������ ������ �ö� �� ����
            break;
    }


    printf("%d", day+1);

    return 0;
}