#include "main.h"

/**
  * main - Entry point
  * Description: Prints '_putchar' followed by new line
  * Return: Always 0
  */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char a = str[i];

		_putchar(a);
		i++;

	}

	return (0);
}
