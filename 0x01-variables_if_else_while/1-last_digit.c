#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that assigns a random digit to the integer n
 * and tells us whether the last digit of n is greater than 5, less than
 * 6 or is equal to 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int y = n % 10;

	if (y > 5)
	{
		printf("Last digit of %d is %d and it is greater than 5 and not 0\n", n, y);
	}
	else if (y < 6)
	{
		printf("Last digit of %d is %d and it is less than 6 and not 0\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is %d and it is 0\n", n, y);
	}

	return (0);
}
