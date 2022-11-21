#include <stdio.h>

unsigned long long int init[5];
unsigned long long int dp[10000]; // don't forget to memset this
unsigned long long int M = 1000000007;
int a, b, c, d, e;
unsigned long long int naive_s(long long int n)
{
    if (n < 5)
        return init[n];

    return (a * naive_s(n - 1) % M +
            b * naive_s(n - 2) % M +
            c * naive_s(n - 3) % M +
            d * naive_s(n - 4) % M +
            e * naive_s(n - 5) % M) %
           M;
}

unsigned long long int s(long long int n)
{
    if (n < 5)
        return init[n];

    if (n < 10000)
    {
        if (dp[n] != -1)
            return dp[n];

        return dp[n] = (a * s(n - 1) % M +
                        b * s(n - 2) % M +
                        c * s(n - 3) % M +
                        d * s(n - 4) % M +
                        e * s(n - 5) % M) %
                       M;
    }
    return (a * s(n - 1) % M +
            b * s(n - 2) % M +
            c * s(n - 3) % M +
            d * s(n - 4) % M +
            e * s(n - 5) % M) %
           M;
}

int main()
{
    for (int i = 0; i < 10000; i++)
        dp[i] = -1;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    for (int i = 0; i < 5; i++)
        scanf("%llu", init + i);

    int Q;
    scanf("%d", &Q);

    while (Q--)
    {
        int n;
        scanf("%d", &n);
        printf("%llu\n", s(n));
    }

    return 0;
}