#include <stdio.h>
/**
 * main - list the lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	printf("\n");
	return (0);
}
