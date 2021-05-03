#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    char *concat2;

    concat = string_nconcat("Holberton ", "School !!!", 6);
    concat2 = string_nconcat(concat, "Is the best", 10);
    printf("%s\n", concat2);
    
    free(concat);
    free(concat2);
    return (0);
}
