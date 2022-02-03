#include <stdio.h>
int main(void)
{
    int i, j, sum = 0, max = -1, cnt;
    int arr[10] = { 0, };
    int arr2[105] = { 0, };
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        arr2[arr[i] / 10]++;
    }
    sum /= 10;
    for (i = 0; i < 100; i++)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
            cnt = i;
        }
    }
    printf("%d\n%d", sum, cnt * 10);
}