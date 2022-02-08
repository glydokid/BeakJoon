#include <stdio.h>
int main(void)
{
	
    int num[3];
    int temp;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 2 - i; j++) {

            if (num[j] > num[j + 1]) {
                temp = num[j];

                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", num[i]);
    }
}