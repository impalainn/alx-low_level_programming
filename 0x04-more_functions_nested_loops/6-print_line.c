#include "main.h"
/**
 * print_line - prints line line using char '_'
 * @n: number for char '_'
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
