#include <stdio.h>

int main()
{
    int n, m;
    int arr[100][100];

    printf("Masukkan baris dan kolom:\n");
    scanf("%d %d", &n, &m);

    printf("\nMasukkan matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nHasil matrix rotasi:\n");
    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i > -1; i--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}