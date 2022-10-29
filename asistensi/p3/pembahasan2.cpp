#include <stdio.h>

int main()
{
    int n, m, arrKaos[999], arrWarga[999];
    int counter;

    printf("Jumlah warga: ");
    scanf("%d", &m);
    counter = 0;

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrWarga[i]);
    }

    printf("\nJumlah kaos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrKaos[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrWarga[i] == arrKaos[j])
            {
                counter++;
            }
        }
    }

    printf("\nWarga dengan baju: ");
    printf("%d", counter);

    return 0;
}