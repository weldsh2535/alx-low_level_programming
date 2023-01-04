#include "main.h"

/**
 * factorial - (n)!: n - (n - 1)
 * @n: input
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
