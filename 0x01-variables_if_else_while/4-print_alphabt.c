#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Prints lowercase alphabets
  * Return: Always 0
  */

int main(void)
{
	int x;

	for (x = 'a'; x <='z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		else
		{
		}
	}
	putchar('\n');

	return (0);
}
