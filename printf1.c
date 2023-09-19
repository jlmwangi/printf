#include "main.h"
#include <stdio.h>
/**
 * printf1_printf - produce output according to a format
 * @format: pointer to a character constant
 *
 * Return: int
 */
int printf1_printf(const char *format, ...)
{
	va_list arguments;
	int n = 0;

	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			n++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int d = va_arg(arguments, int);

				write(1, &d, 4);
			}
			else
			{
				putchar(*format);
				putchar('%');
				n += 2;
			}
			format++;
		}
	}
	va_end(arguments);
	return (n);
}
