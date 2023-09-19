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
			if (*format == '%')
			{
				write(1, format, 1);
				n++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(arguments, int);

				write(1, &c, 1);
				n++;
			}
			else if (*format == 's')
			{
				char *ptr = va_arg(arguments, char*);
				int _strlen = 0;

				while (ptr[_strlen] != '\0')
					_strlen++;
				write(1, ptr, _strlen);
				n += _strlen;
			}
		}
		format++;
	}
	va_end(arguments);
	return (n);
}

