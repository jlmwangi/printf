#include "main.h"
/**
 * _printf - produce output according to a format
 * @format: pointer to a character constant
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int n = 0;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			n++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'd')
			{
				int d = va_arg(arguments, int);

				write(1, &d, 4);
				n++;
			}
			else if (*format == 'i')
			{
				int i = va_arg(arguments, int);

				write(1, &i, 4);
				n++;
			}
		}
		format++;
	}
	va_end(arguments);
	return (n);
}
