#include <stdio.h>
#include "main.h"

/**
  * main - prints all arguements it receives
  * @argc: arguement count
  * @argv: string that holds all the arguements
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv; i++, argv++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
