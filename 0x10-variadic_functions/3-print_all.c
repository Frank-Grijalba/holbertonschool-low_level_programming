#include "variadic_functions.h"


/**
 * print_all - prints all the types of arguments according to the characters
 *             of va_list
 * @format: Is the va_list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ptrargs;
	int i = 0;
	char form;
	char *str;

	va_start(ptrargs, format);

	while (format != NULL && format[i])
	{
		form = format[i];
		switch (form)
		{
		case 'c':
			printf("%c", va_arg(ptrargs, int));
			break;
		case 'i':
			printf("%d", va_arg(ptrargs, int));
			break;
		case 'f':
			printf("%f", va_arg(ptrargs, double));
			break;
		case 's':
			str = va_arg(ptrargs, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((form == 'c' || form == 'i' || form == 'f' || form == 's')
		    && format[i + 1])
			printf(", ");
		i++;
	}
printf("\n");
va_end(ptrargs);
}
