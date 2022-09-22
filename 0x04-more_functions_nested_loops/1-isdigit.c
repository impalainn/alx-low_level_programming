#include "main.h"

/**
 * _isdigit - checks for digit, 0 to 9
 * @c: digit for check
 * Return: if c is digit,1,else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
