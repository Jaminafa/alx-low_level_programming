#include "main.h"

/**
  * *_strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: concatenated string
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int x;

	for (i = 0; src[i]; i++)
	{
		;
	}
	for (j = 0; dest[j]; j++)
	{
		;
	}
	for (x = 0; src[x]; x++, j++)
	{
		dest[j] = src[x];
	}

	return (dest);
}
