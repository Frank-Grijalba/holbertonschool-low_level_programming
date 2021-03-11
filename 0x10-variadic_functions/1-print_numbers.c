#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print the variables of @n number with @separator
 * @separator: separator character
 * @n: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptrargs;

	va_start(ptrargs, n);


		while (i < n)
		{
			printf("%d", va_arg(ptrargs, int));
			if (separator != NULL)
			{
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
			i++;
		}

	printf("\n");
	va_end(ptrargs);
}
