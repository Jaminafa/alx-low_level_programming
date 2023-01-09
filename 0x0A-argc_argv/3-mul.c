#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - program multiplies two numbers
  * @argc: number of arguements passed to program
  * @argv: value of arguments passed to program
  * Return: 0. -1 if error
  */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; argv[i]; i++)
		{
			mul = mul * (atoi(argv[i]));
		}
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
