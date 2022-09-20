#include "main.h"
/**
 * main - updates value
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 98;

        reset_to_98(n);
}
