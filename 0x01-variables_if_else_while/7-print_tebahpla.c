#include <stdio.h>

int main()
{
	char c = 'z';

	while(c >= 'a')
	{
		putchar(c);
		c--;
	}
	printf("\n");
	return (0);
}
