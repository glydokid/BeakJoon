#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int day;

    if ((V - A) % (A - B) == 0)
        day = (V - A) / (A - B); // ���� A�ö󰡰� �㿡B�̲�����
    else
        day = (V - A) / (A - B) + 1;

    printf("%d\n", day + 1);

}