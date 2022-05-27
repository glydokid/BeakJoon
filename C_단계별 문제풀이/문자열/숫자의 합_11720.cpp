#include <stdio.h>

int main(void) {

    int n, sum = 0;

    char arr[101] = {0};

    scanf("%d", &n);
    scanf("%s", &arr);

    for (int i = 0; i < n; i++) {
        sum += arr[i] - 48;
    }

    printf("%d", sum);
}