#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - This program identifies if a randomly generated number
  * is greater thatn 5, is zero or is less thatn 6
  * and not 0
  * Return: This returns 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int x;
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is zero\n", n);
	}
	else if ((x < 6) && (x != 0))
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	else
	{
	}

	return (0);
}