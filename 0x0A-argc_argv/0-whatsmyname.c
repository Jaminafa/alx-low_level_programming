#include <stdio.h>
#include "main.h"

/**
  * main - entry point.
  * Description: program prints its name when run
  * @argc: This arguement counts the number of
  * arguements pased to the program.
  * @argv: this is a string that stores the
  * arguements passed to the prgram.
  * Return: 0 if successful.
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
