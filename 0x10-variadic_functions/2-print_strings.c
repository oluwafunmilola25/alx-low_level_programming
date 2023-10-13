#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: is the number of string to be printed
 * Return: the string to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	const char *str;

	va_start(string, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(string, const char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	va_end(string);
	printf("\n");
}
