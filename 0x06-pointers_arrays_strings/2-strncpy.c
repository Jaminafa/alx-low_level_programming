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

	for (i = 0, x = 0; src[x] && i < n; i++, x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
