#include <stdio.h>

/**
 * main - Prints the sum of even numbers of the fibonacci series of numbers
 * less than 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 0, b = 1, c = 0, d = 0;
	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
		{
			d = d + c;
		}
		a = b;
		b = c;
	}
	printf("%d\n", d);
	return (0);
}
