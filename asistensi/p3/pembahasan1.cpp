#include <stdio.h>

int main()
{
    int n;
    int temp;
    scanf("%d", &n);
    temp = n;
    printf(" ");
    for (int i = 0; i < n * 2; i++)
    {
        printf("_");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        printf("\\");
        for (int k = (temp - 1) * 2; k > 0; k--)
        {
            printf("*");
        }
        temp--;
        printf("/\n");
    }

    return 0;
}