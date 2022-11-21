#include <stdio.h>

int fibbonaci(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibbonaci(n - 1) + fibbonaci(n - 2));
    }
}

void print_fib(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibbonaci(i));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_fib(n);
    return 0;
}