#include "main.h"
/**
 * _string - A function that prints a string
 * @arguments: number of arguemnts
 *
 * Return: number of character count
 */
int _string(va_list arguments)
{
	char *ptr = va_arg(arguments, char *);

	int i, c = 0;

	if (ptr)
	{
		ptr = "(nil)";
	}
	for (i = 0; ptr[i]; i++)
	{
		putchar(ptr[i]);
		c++;
	}
	return (c);
}
/**
 * _char - a function that returns a char
 * @arguments: number of arguments
 *
 * Return: 1
 */
int _char(va_list arguments)
{
	char c = va_arg(arguments, int);

	putchar(c);
	return (1);
}
/**
 * _percent - prints percentage
 *
 * Return: 1
 */
int _percent(void)
{
	putchar('%');
	return (1);
}
