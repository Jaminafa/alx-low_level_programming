#include "main.h"

/**
  * *_strncpy - Function copies a string from one
  * source to another.
  * @dest: Destination string
  * @src: Source string
  * @n: number of bytes to copy
  *
  * Return: Return destination string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int x;
	int j;

	while (src[x])
		j++;

	for (i = 0, x = 0; src[x] && i < n; i++, x++)
	{
		dest[x] = src[x];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
