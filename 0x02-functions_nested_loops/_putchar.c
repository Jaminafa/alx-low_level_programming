#include <unistd.h>
/**
  * _putchar - writes the character a to standard output
  * @a: is the character to output
  * Return: On success 1.
  */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
