#include "main.h"
/**
 * print_num - prints number
 * @n: va_list
 *
 * Return: int
 */
int print_num(va_list n)
{
	int p = va_arg(n, int);
	int c = 0;

	c += num_print(p);
	return (c);
}
/**
 * num_print - prints numbers
 * @arg: argument
 *
 * Return: int
 */
int num_print(int arg)
{
	int c = 0;

	unsigned int j = arg;

	if (arg < 0)
	{
		putchar('-');
		c++;
		arg *= -1;
		j = arg;
	}
	j /= 10;
	if (j)
	c += num_print(j);
	c += putchar(((unsigned int) arg % 10) + 48);
	return (c);
}
