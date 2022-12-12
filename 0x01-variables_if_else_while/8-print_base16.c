#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Prints all numbers of 16 in lower case
  * Return: Always 0
  */
int main(void)
{
	int x, y;

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
