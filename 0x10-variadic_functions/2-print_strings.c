#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the variables of @n number with @separator
 * @separator: separator character
 * @n: parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptrstr;
	va_list ptrargs;

	va_start(ptrargs, n);

	while (i < n)
	{
		ptrstr = va_arg(ptrargs, char *);
		if (ptrstr != NULL)
		{
			printf("%s", ptrstr);
			if (separator != NULL)
			{
				if (i < n - 1)
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			printf("(nil)");
		}
		i++;
	}
	printf("\n");
	va_end(ptrargs);
}
