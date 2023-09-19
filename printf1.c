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

			char buffer[32];

			int len = snprintf(buffer, sizeof(buffer), "%d", d);

			write(1, buffer, len);
			n += len;
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
