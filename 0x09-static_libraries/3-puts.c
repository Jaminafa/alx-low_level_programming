#include "main.h"

/**
  * _puts - prints a string followed by a new line to stdout
  * @str: string to printed out
  * Return: void
  */

void _puts(char *s)
{
	int len = 0;

	while (s[len])
	{
		_putchar(s[len]);
			len++;
	}

	_putchar('\n');

}
