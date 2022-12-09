#include <stdio.h>

int main(void)
{
	int i = '0';
	char c = 'a';

	while(i <= '9')
	{
		putchar(i);
		i++;
	}

	while(c <= 'f')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}

