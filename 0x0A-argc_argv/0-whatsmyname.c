#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    char *program_name;

    program_name = strrchr(argv[0], '/');
    if (program_name == NULL)
    {
        program_name = argv[0];
    }
    else
    {
        program_name++;
    }

    printf("%s\n", program_name);

    return (0);
}
