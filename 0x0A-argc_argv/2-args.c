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
    int i;

    /* Loop through each command line argument and print it */
    for (i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
