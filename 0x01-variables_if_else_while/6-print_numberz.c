#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: prints single digits below 10 without
  * the use of Char, printf, puts etc.
  * Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
	}
	putchar('\n');

	return (0);

}
