#include <stdio.h>

int main()
{
    int i, k, x;
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
