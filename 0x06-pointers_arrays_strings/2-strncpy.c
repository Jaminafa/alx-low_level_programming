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
	int i;
	int j = 0;

	for (i = 0, x = 0; src[x] && i < n; i++, x++)
	{
		dest[x] = src[x];
	}

	for (i = 0; src[i]; i++)
		j++;

	for (i = j; dest[i] && i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
