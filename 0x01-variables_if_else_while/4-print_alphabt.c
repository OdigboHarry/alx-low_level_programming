#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all letters of the alphabets
 * except q and e using putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
