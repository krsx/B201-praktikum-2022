#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        // spasi segitiga luar
        for (int k = n - i; k > 0; k--)
        {
            printf(" ");
        }

        printf("/");

        // spasi segitiga dalam
        for (int t = 0; t < (i - 1) * 2; t++)
        {
            printf(" ");
        }

        printf("\\\n");
    }

    // bagain segitiga bawah
    printf("/");
    for (int i = 0; i < (n - 1) * 2; i++)
    {
        printf("_");
    }
    printf("\\\n");
    return 0;
}