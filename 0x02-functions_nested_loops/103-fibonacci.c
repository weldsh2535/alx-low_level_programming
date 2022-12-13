#include <stdio.h>

/**
 * main - main blocks of the functions
 * Description: Print the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
