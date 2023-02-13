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
	int x;
	int j;

	while (src[x])
		j++;

	for (x = 0; src[x] && x < n; x++)
	{
		dest[x] = src[x];
	}
	for (x = j; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
