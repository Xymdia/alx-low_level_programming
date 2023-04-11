#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    /* Print the number of command line arguments */
    printf("%d\n", argc - 1);

    return 0;
}
