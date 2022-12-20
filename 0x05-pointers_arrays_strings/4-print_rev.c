#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: the used string reference pointer
  * Return: 0
  */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
