#include "main.h"
/**
 * print_alphabet_x10 - prints 10 alphabet
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	
	for (alphabet = 0; alphabet <= 10; alphabet++)
		while(alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
	putchar('\n');
}
