#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all numbers of base 16
 * in lower case using putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	unsigned int c = 0x0;
	char d = 'a';

	while (c <= 0x9)
	{
		if (c <= 0x9)
		{
			putchar('0' + c);
			c++;
		}
	}
	while (c >= 0x9 && d <= 'f')
	{
		putchar(d);
		c++;
		d++;
	}
	putchar('\n');

	return (0);

}
