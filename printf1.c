#include "main.h"
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
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		if (*format == 'd' || *format == 'i')
		{
			int d = va_arg(arguments, int);

			write(1, &d, 4);
			n++;
		}
		else
		{
			write(1, format, 1);
			n++;
		}
		format++;
	}
	va_end(arguments);
	return (n);
}
