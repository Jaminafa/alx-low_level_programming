#include <stdio.h>
#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: concatenated string
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}
	for (x = 0; src[x] != '\0'; || x < i; x++, j++)
	{
		dest[j] = src[x];
	}
	dest[j + i + 1] = '\0';

	return (dest);
}
