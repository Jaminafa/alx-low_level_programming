#include "main.h"

/**
  * _puts - prints a string followed by a new line to stdout
  * @str: string to printed out
  * Return: void
  */

void _puts(char *str)
{
	int len = 0;

	while (str[len])
	{
		_putchar(str[len]);
			len++;
	}

	_putchar('\n');

}
