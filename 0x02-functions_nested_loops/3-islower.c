#include "main.h"
/**
 * _islower - tests lowercase character
 * @c: int for argument
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}

	else
		return (0);

}
