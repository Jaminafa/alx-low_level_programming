#include "main.h"

/**
  * *_strncat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of bytes to concatenate
  * Return: concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int j;
	int x;

	for (j = 0; dest[j]; j++)
	{
		;
	}
	for (x = 0; src[x] &&x < n; x++, j++)
	{
		dest[j] = src[x];
	}

	return (dest);
}
