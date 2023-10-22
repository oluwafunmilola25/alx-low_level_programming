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
	int b = 0;
	int i;
	char c;
	char *s;
	float f;

	va_start(print, format);
	while (format && format[b])
	{
		if (b > 0)
		{
			printf(", ");
		}

		switch (format[b])
		{
			case 'c':
				c = va_arg(print, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(print, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(print, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(print, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		b++;
	}
	va_end(print);
	printf("\n");
}
