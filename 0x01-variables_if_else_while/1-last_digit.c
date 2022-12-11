#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description: This program identifies if a randomly generated number
  * is greater thatn 5, is zero or is less thatn 6
  * and not 0
  * Return: This returns 0
  */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if ((x < 6) && (x != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}

	return (0);
}
