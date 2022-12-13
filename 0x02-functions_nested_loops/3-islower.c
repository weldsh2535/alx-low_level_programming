#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Return: 1 if c is lowercase
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
