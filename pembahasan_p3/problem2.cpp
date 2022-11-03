#include <stdio.h>

int arr[10000000000];

int main()
{
    int n, midval;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    midval = n / 2;

    if (n % 2 == 0)
    {
        printf("\n%.1f", (float)(arr[midval] + arr[midval - 1]) / 2);
    }

    else
    {
        printf("\n%.1f", (float)arr[midval]);
    }

    return 0;
}
