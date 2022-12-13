#include "main.h"

/**
 * _isalpha - checks letter
 * Return: 1 if ch is lowercase
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
