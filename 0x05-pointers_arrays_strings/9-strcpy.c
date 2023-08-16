#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies a string into a buffer
 * @*dest: destination string pointer
 * @*src: source string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0, i;

	while(*(src + l) != '\0')
	{
		l++;
	}

	for(i = 0; i <= l; i++)
	{
		*(dest + i) = *(src + i);

	}
	return dest;
}
