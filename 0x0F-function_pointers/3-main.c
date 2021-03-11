#include "3-calc.h"

/**
 *main - entry point
 *Description: calculates an operation between two numbers
 *@argc: argument count
 *@argv: argument vectors
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int res, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = operator(a, b);
	printf("%d\n", res);
	return (0);
}

