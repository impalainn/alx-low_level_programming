#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse in recursion
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	int i;
	
	for(i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

