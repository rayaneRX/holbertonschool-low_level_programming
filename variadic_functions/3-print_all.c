#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format:  list of types of arguments
 * Return: 0
 */

void print_all(const char * const format, ...)
{
va_list p;
int n = 0, i = 0;
char *r = ", ";
char *string;

va_start(p, format);
	while (format && format[n])
	++n;
	while (format && format[i])
	{
	if (i == (n - 1))
		r = "";
	switch (format[i])
	{
	case 'c':
		printf("%c%s", va_arg(p, int), r);
		break;
	case 'i':
		printf("%d%s", va_arg(p, int), r);
		break;
	case 'f':
		printf("%f%s", va_arg(p, double), r);
		break;
	case 's':
		string = va_arg(p, char *);
		if (string == NULL)
		{
			printf("(nil), ");
			break;
		}
			printf("%s%s", string, r);
		break;
	}
	++i;
	}
	printf("\n");

	va_end(p);
}
