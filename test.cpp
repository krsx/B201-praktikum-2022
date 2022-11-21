#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kondisi(char pilihan[3], int komputer)
{
    if (pilihan == 'b')
    {
        if (komputer == 1)
        {
            return 0;
        }
        else if (komputer == 2)
        {
            return 1;
        }
        else if (komputer == 3)
        {
            return 2;
        }
    }
    else if (pilihan == 'k')
    {
        if (komputer == 1)
        {
            return 1;
        }
        else if (komputer == 2)
        {
            return 2;
        }
        else if (komputer == 3)
        {
            return 0;
        }
    }
    else if (pilihan == 'g')
    {
        if (komputer == 1)
        {
            return 2;
        }
        else if (komputer == 2)
        {
            return 0;
        }
        else if (komputer == 3)
        {
            return 1;
        }
    }
}

int main()
{

    char kelar[100];
    int status = 1;
    while (status == 1)
    {
        int hasil, enemy;
        char apa[10];
        printf("Pilihan User: ");
        scanf("%s", &apa);
        char pili = apa[0];
        srand(time(NULL));
        enemy = (rand() % 3) + 1;

        if (enemy == 1)
        {
            printf("Pilihan Computer: batu");
        }
        else if (enemy == 2)
        {
            printf("Pilihan Computer: gunting");
        }
        else if (enemy == 3)
        {
            printf("Pilihan Computer: kertas");
        }

        hasil = kondisi(pili, enemy);
        if (hasil == 0)
        {
            printf("\nseri");
        }
        else if (hasil == 1)
        {
            printf("\nmenang");
        }
        else if (hasil == 2)
        {
            printf("\nkalah");
        }
        printf("\ningin lanjut:");
        scanf("%s", kelar);
    }
    if (kelar == 'yes')
    {
        status = 1;
    }
    else
    {
        status = 0;
    }
}