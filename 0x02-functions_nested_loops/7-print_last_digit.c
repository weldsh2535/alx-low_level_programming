#include "main.h"

/**
 * print_last_digit - checks number
 * @j: enter the number.
 * Return: Ppositve to return r as negative to return -r,
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
