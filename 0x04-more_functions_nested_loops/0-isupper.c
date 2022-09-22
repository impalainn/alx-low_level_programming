#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: integer
 * Return: if c is uppercase, 1, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91 && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
