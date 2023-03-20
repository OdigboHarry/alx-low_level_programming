#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all the alphabets in lower case
 * and then in upper case using only putchar
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	printf("\n");

	return (0);
}
