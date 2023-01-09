#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - adds positive numbers passed to it as arguements
  * @argc: number of arguments passed to the program
  * @argv: value of arguements passed to the program
  * Return: 0 if successful. 1 for error
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	}

	printf("%d\n", sum);
	return (0);
}
