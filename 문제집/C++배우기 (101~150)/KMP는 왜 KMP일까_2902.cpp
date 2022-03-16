#include <stdio.h>

int main() {

    char name[100] = { 0, };

    scanf("%s", &name);

    printf("%c", name[0]);

    for (int i = 0; i < 100; i++) {

        if (name[i] == '-')
            printf("%c", name[i + 1]);

        if (name[i] == 0)
            break;

    }

    return 0;
}
