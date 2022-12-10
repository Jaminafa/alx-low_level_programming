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

	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("%d is less than 6 and not 0\n", n);
	}
	else
	{
	}

	return (0);
}
