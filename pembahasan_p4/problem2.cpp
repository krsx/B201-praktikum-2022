#include <stdio.h>
void pola(int n)
{
    if (n <= 1)
    {
        printf("*\n");
        return;
    }
    pola(n - 1);
    for (int i = 0; i < n; i++)
        printf("*");
    printf("\n");
    pola(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    pola(n);
    return 0;
}