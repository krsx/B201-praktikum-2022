#include <stdio.h>

int dosmth(int *arr, int l, int r, int x)
{
    int counter = 0;

    for (int i = l; i <= r; i++)
        if (arr[i] < x)
            counter++;

    return counter;
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[10000];
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        scanf("%d %d %d", &l, &r, &x);
        printf("%d\n", dosmth(arr, l, r, x));
    }

    return 0;
}