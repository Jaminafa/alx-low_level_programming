#include "main.h"

/**
  * print_numbers - prints numbers from 0 - 9
  * Return: void
  */

void print_numbers(void)
{
	int i;
	int c = 10;

	for (i = 0; i < c; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
