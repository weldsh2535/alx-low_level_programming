#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) >= 97) && (*(s + c) <= 122))
			*(s + c) = *(s + c) - 32;
		c++;
	}

	return (s);
}
