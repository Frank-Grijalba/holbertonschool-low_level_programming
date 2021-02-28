#include <stdio.h>

/**
 *main - Show each arguments per line
 *@argc: argument count
 *@argv: argument vector
 *Return: zero
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
