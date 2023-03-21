#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - A program that prints all possible combinations of single
 * digit numbers separated by a comman and space using putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar('0' + c);
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
		c++;
	}
	printf("\n");

	return (0);
}
