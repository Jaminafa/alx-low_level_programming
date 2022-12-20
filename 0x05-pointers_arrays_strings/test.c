#include <stdio.h>

int main()
{
	char *str;
	int lenght;
	int i = 0;

	str = "My first letter!";
	lenght = 0;

	while (str[lenght])
	{
		printf("%d \n", i++);
		lenght++;
	}

	printf("%d \n", lenght);
	return lenght;


}
