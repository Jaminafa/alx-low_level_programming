#include "main.h"

/**
  * print_alphabet - Entry point
  * Description: a function that print the alphabet,
  * in lowercase folloed by a new line
  * Return: void
  */

void print_alphabet(void)
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
