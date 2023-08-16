#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int len = 0;
	int i;

	while(*(s + len) != '\0')
	{
		len ++;
	}

	i = 0;
	while(i < len/2)
	{
		char c = *(s + i);
		
		*(s + i) = *(s + len - 1 - i );
		*(s + len - 1 - i) = c;

		i++;

	}
}
