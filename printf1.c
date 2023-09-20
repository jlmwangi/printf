#include "main.h"
/**
 * printf1_printf - produce output according to a format
 * @format: pointer to a character constant
 *
 * Return: int
 */
int printf1_printf(const char *format, ...)
{
	
		int n = 0;
		va_list arguments;

		if (format == NULL)
		{
			return (-1);
		}
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
				if (*format == '\0')
					break;
				if (*format == '%')
				{
					n += _percent();
				}
				else if (*format == 'c')
				{
					n += _char(arguments);
				}
				else if (*format == 's')
				{
					n += _string(arguments);
				}
				else if (*format == 'd' || *format == 'i')
				{
					n += print_num(arguments);
				}
			}
			format++;
		}
		va_end(arguments);
		return (n);
}
