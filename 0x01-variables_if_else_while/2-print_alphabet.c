#include <unistd.h>
#include <stdio.h>

/**
  * main - Entry Point
  * Description: Prints the alphabet in lowercase
  * Return: This returns 0
  */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
