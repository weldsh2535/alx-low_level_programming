#include"main.h"

/**
 * puts2 - prints every character
 * @str: string parameter input
 * Return: Noting
*/

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; ++index)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
