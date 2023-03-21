#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digit numbers of
 * base 10 using putchar and without using the char data type
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		c++;
	}
	putchar('\n');

	return (0);
}
