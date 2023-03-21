#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that prints all possible combinations of two digits
 * taking into mind that the two digits must be different using putchar.
 * Restriction placed on having same combination e.g 10 and 01 are
 * considered same combination.
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c, d;

	for (d = 0; d <= 8; d++)
	{
		for (c = d + 1; c <= 9; c++)
		{
			putchar('0' + d);
			putchar('0' + c);
			if (c == 9 && d == 8)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
