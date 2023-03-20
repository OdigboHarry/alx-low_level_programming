#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all the alphabets using putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	printf("\n");

	return (0);
}
