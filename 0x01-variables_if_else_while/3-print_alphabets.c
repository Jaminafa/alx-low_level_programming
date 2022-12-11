#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  * Description: Prints alphabet in lowercase then uppercase
  * Return: Always 0
  */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);

}
