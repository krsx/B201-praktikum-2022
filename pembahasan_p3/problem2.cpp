#include <stdio.h>

int arr[10000000];

int main()
{
    int n, midval;
    float result;
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

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    if (n % 2 == 0)
    {
        midval = n / 2;
        result = (arr[midval] + arr[midval - 1]) / 2;
        printf("%.1f", result);
    }

    else
    {
        midval = n / 2;
        result = arr[midval];
        printf("%.1f", result);
    }

    return 0;
}
