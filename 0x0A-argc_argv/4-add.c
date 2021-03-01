#include <stdio.h>
#include <stdlib.h>
/**
 *numcheck - verifies that the string has only numbers
 *@s: string to verify
 *Return: 1 (true), 0 (false)
 */

int numcheck(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 *main - add numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 1 (because find other symbols in the argv[]) 0 if everythings is O.K
 */

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (numcheck(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
