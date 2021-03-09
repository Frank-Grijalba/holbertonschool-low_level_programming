#include <stdio.h>

#ifndef TRACE
#define TRACE __FILE__
#endif
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", TRACE);
	return (0);
}
