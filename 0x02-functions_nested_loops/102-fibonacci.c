#include <stdio.h>

/**
 * main - prints 50 fibonacci numbers starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 1, b = 0, c = 0, d = 0;

	while (d < 50)
	{
		c = a + b;
		printf("%ld", c);
		if (d == 49)
		{
			printf("\n");
			break;
		}
		else
		{
			printf(", ");
		}
		b = a;
		a = c;
		d++;
	}
	return (0);
}
