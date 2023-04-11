#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;

    /* check argument count */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    /* parse the amount of cents */
    cents = atoi(argv[1]);

    /* check if the amount is negative */
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    /* calculate the minimum number of coins needed */
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else if (cents >= 2)
        {
            cents -= 2;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }

    /* print the result */
    printf("%d\n", coins);
    return 0;
}
