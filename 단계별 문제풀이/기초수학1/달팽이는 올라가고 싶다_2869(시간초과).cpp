#include <stdio.h>

int main() {

    int A, B, V; //올라가는 미터, 내려가는 미터, 나무 높이
    int result = 0;
    int day = 0;

    scanf("%d %d %d", &A, &B, &V);

    while (1) {
        result =result + A - B; //하루에 올라갈 수 있는 높이

        day++;

        if (result + A >= V) // 다음날 무조건 올라갈 수 있음
            break;
    }


    printf("%d", day+1);

    return 0;
}