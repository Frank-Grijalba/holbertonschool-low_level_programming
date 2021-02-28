#include <stdio.h>

/**
 *main - count the arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: zero
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;
	return (0);
}
