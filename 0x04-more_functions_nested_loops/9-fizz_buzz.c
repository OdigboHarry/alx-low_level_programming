#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 1 to 100, followed by a new lint. For
 * multiples of three it prints Fizz instead of the number and
 * for the multiples of five prints Buzz. For numbers which are multiples of
 * both three and five it prints FizzBuzz.
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
	int c, d;

	c = 1;
	d = 100;
	while (c <= d)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
		c++;
	}
	printf("\n");

	return (0);
}
