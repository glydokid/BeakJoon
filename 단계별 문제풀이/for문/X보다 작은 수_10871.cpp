#include<stdio.h>
int main() {
    int N, X, input;

    scanf("%d %d", &N, &X); //두 수 입력

    for (int i = 0; i < N; i++) {
        scanf("%d", &input);

        if (X > input)
            printf("%d ", input);
    }
    return 0;
}