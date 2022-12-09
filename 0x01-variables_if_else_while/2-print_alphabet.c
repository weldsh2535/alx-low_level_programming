#include <stdio.h>
/**
 * main - Display the charaters
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}
