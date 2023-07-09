#include <stdio.h>

/**
 * main - Prints the fibonacci sequence starting from 1 to the 98th term
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, d, e, f;

	a = 1, b = 0, c = 0, d = 0, e = 0, f = 0;

	while (d < 98)
	{
		c = a + b;
		if (c > 9000000000000000000)
		{
			e = c / 1000000000;
			f = c % (e * 1000000000);
			printf("%ld", e);
			printf("%ld", f);
			if (d == 97)
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
		else if(c < 9000000000000000000)
		{
			printf("%ld", c);
			if (d == 97)
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
	}
	return (0);
}
