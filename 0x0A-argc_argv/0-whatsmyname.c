#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of arguments passed
 * @argv: An array containing the arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
    (void)argc; /* Suppress unused parameter warning */

    printf("%s\n", argv[0]);

    return 0;
}
