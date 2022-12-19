/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: Nothing
*/

void rev_string(char *s)
{
	int length, index;
	char ch;

	for (length = 0; s[length] != '\0'; ++length)
		;
	for (index = 0; index < length / 2; ++index)
	{
		ch = s[index];
		s[index] = s[length - 1 - index]; 
		s[length - 1 - index] = ch;
	}
}
