#include<stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
 *
*/

double _sqrt(double x)
{
	float sq, tmp;

	sq = x / 2;
	tmp = 0;

	while (sq != tmp)
	{
		tmp = sq;
		sq = (x / tmp + tmp) / 2;
	}
	return (sq);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int primeNumber, largest;

	/* first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (primeNumber = 3; primeNumber <= _sqrt(num); primeNumber += 2)
	{
		while (num % primeNumber == 0)
		{
			num = num / primeNumber;
			largest = primeNumber;
		}
	}


	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

	largest_prime_factor(2475143);

	return (0);
}
