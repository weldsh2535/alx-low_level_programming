#include <stdio.h>
/**
 * main - print all the letters except q and e
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}

	printf("\n");
	return (0);

}
