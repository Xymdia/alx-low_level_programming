#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the command line arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    /* Check that the program was called with two arguments */
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    /* Convert the command line arguments to integers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    /* Perform the multiplication */
    result = num1 * num2;

    /* Print the result */
    printf("%d\n", result);

    return 0;
}
