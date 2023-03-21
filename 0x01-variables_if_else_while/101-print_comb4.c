#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints all possible different combinations of
 * three digits with the following rules-
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the
 * three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c, d, e;

	for (c = 0; c < 8; c++)
	{
		for (d = c + 1; d <= 8; d++)
		{
			for (e = d + 1; e <= 9; e++)
			{
				putchar('0' + c);
				putchar('0' + d);
				putchar('0' + e);
				if (c == 7 && d == 8 && e == 9)
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
	}

	return (0);
}

