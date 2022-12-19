#include"main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @n: elements parameter input
 * @a: string parameter input
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; ++index)
	{
		if (index != (n - 1))
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
	}
	printf("\n");
}
