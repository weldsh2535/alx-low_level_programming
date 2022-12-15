#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times
*/

void print_line(int n)
{
	int Ch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (Ch = 1; Ch <= n; ++Ch)
			_putchar('_');
		_putchar('\n');
	}
}
