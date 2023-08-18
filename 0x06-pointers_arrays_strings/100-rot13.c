#include "main.h"
/**
 * rot13 - converts string to rot13
 * @c: char string pointer
 * Return: char pointer
 */

char *rot13(char *c)
{
	int i = 0;

	while(*(c + i) != '\0')
	{
		if (*(c + i) >= 65 && *(c + i) <= 90)
		{
			*(c + i) = (*(c + i) - 65 + 13) % 26 + 65;
		}
		else if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			*(c + i) = (*(c + i) - 97 + 13) % 26 + 97;
		}
		i++;
	}
	return (c);
}
