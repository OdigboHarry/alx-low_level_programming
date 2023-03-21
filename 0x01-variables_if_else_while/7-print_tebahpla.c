#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all the letters of the
 * alphabets in reverse using putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
