#include <stdio.h>
#include "main.h"

/**
  * main - entry point.
  * Description: program prints the number of arguments
  * passed to it.
  * @argc: This arguement counts the number of
  * arguements pased to the program.
  * @argv: this is a string that stores the
  * arguements passed to the prgram.
  * Return: 0 if successful.
  */

int main(int argc, char *argv[])
{
	for (i = 0, *argv; i++, argv++)
		;

	printf("%d\n", i - 1);


	return (0);
}
