#include "main.h"

/**
 * print_sign - checks number
 * @n: .
 * Return: 1 if c is lowercase
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
