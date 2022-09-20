#include "main.h"
/**
 * print_alphabet - calls function
 * Description: 'prints arg'
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
