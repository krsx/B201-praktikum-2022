#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int game(char user[999])
{
    int result = -1;
    char comp[999];
    int randomizer = rand() % 100;

    if (randomizer < 33)
    {
        strcpy(comp, "batu");
    }
    else if (randomizer > 33 && randomizer < 66)
    {
        strcpy(comp, "gunting");
    }
    else
    {
        strcpy(comp, "kertas");
    }
    printf("Pilihan computer: %s\n", comp);

    if ((strcmp(user, comp) == 0))
    {
        result = 2;
    }
    else
    {
        if ((strcmp(user, "batu") == 0))
        {
            if ((strcmp(comp, "kertas") == 0))
            {
                result = 0;
            }
            else if ((strcmp(comp, "gunting") == 0))
            {
                result = 1;
            }
        }

        else if ((strcmp(user, "gunting") == 0))
        {
            if ((strcmp(comp, "batu") == 0))
            {
                result = 0;
            }
            else if ((strcmp(comp, "kertas") == 0))
            {
                result = 1;
            }
        }

        else if ((strcmp(user, "kertas") == 0))
        {
            if ((strcmp(comp, "gunting") == 0))
            {
                result = 0;
            }
            else if ((strcmp(comp, "batu") == 0))
            {
                result = 1;
            }
        }
    }

    return result;
}

const char *game_result(int result)
{
    if (result == 1)
    {
        return "You Win!\n";
    }
    else if (result == 0)
    {
        return "You Lose!\n";
    }
    else if (result == 2)
    {
        return "Draw\n";
    }
    return "";
}

int validate(char user[999])
{
    int valid = 0;
    if ((strcmp(user, "gunting") == 0) || (strcmp(user, "batu") == 0) || (strcmp(user, "kertas") == 0))
    {
        valid = 1;
    }
    return valid;
}

int main()
{
    printf("SELAMAT DATANG DI GAME BATU GUNTING KERTAS!\n");
    bool play = true;
    int counter = 1;

    while (play)
    {
        char user[999];
        char play_again;

        printf("\nGAME %d\n", counter);
        printf("Pilihan User: ");
        scanf("%s", &user);

        if (validate(user))
        {
            int result = game(user);
            printf("%s", game_result(result));
        }
        else if ((strcmp(user, "quit") == 0))
        {
            printf("GAME OVER!\n");
            break;
        }

        counter += 1;
    }
    return 0;
}