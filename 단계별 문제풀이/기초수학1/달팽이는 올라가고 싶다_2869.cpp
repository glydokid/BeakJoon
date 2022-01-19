#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int day;

    if ((V - A) % (A - B) == 0)
        day = (V - A) / (A - B); // ³·¿¡ A¿Ã¶ó°¡°í ¹ã¿¡B¹Ì²ô·¯Áü
    else
        day = (V - A) / (A - B) + 1;

    printf("%d\n", day + 1);

}