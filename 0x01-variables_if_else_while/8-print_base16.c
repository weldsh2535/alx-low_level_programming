#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}

