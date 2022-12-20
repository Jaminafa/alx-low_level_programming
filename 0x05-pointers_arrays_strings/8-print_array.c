#include "main.h"
#include <stdio.h>

/**
  * print_array - print 'n' elements of an array of integers
  * @a: int type array pointer
  * @n: int type integer
  * Description: Number must be separated by comma and space,
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
