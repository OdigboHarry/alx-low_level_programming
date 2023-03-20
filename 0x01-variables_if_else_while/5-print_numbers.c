#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digits
 * of base 10 starting from 0
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");

	return (0);
}
