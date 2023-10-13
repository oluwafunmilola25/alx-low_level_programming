#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything passed to it
 * @format: a list of types of arguments passed
 * Return: success
 */

void print_all(const char * const format, ...)
{
	va_list print;
	int i;
	char c, *s;
	double f;
	const char *formatnew = format;

	va_start(print, format);
	while (*formatnew != '\0')
	{
		if (*formatnew == 'c')
		{
			c = va_arg(print, int);
			printf("%c, ", c);
		}
		else if (*formatnew == 'i')
		{
			i = va_arg(print, int);
			printf("%d, ", i);
		}
		else if (*formatnew == 'f')
		{
			f = va_arg(print, double);
			printf("%f, ", f);
		}
		else if (*formatnew == 's')
		{
			s = va_arg(print, char *);
			if (s != NULL)
			{
				printf("%s", s);
			}
			else if (s == NULL)
			{
				printf("(nil)");
			}
		}
		formatnew++;
	}
	va_end(print);
	printf("\n");
}
