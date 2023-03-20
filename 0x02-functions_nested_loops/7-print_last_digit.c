#include "main.h"
/**
 *print_last_digit -  print and return the last digit of an integer input
 * @k:integer for which last digit is returned
 * Return: last digit
 */
int print_last_digit(int k)
{
	int m = k % 10;

	if (k < 0)
	{
		m = -m;
}
	_putchar('0' + m);
	return (m);
}
