#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if  (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("is zero %d.\n", n);
		}
		else
		{
			printf("is negative %d.\n", n);
		}
	}
	return (0);
}
