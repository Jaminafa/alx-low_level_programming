#include "main.h"

/**
  * _isalpha - Entry point
  * Description: Checks for alphabetic character
  * @c: The integer whose value it receives
  * Return: Always 0
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
