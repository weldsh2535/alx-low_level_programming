#include <stdio.h>

int main()
{
	char c = 'a';
	char b = 'A';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	while(b <= 'Z')
	{
		putchar(b);
		b++;
	}

	printf("\n");
	return (0);
}
