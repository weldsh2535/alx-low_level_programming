#include"main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 * Return: Nothing
*/

void puts_half(char *str)
{
	int length, n;

	for (length = 0; str[length] != '\0'; ++length)
		;

	if (length % 2 == 0)
	{
		for (n = length / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((length - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
