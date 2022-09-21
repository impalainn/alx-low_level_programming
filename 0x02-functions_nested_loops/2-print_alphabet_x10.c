#include "main.h"
/**
 * print_alphabet_x10 - prints 10 alphabet
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
	
	putchar('\n');
	}
}
