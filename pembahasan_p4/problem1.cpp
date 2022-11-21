#include <stdio.h>

int f(int n)
{
    if (n <= 1)
        return 1;

    if (n & 1)
        return f((n << 2) + n + 1);

    else
        return f(n >> 1);
}

int main()
{
    int N, arr[99999];
    int result = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++)
    {
        result += 1;
    }

    printf("%d", result);
    return 0;
}