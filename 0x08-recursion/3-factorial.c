#include "main.h"
/**
 * factorial - returns factorial of an integer
 * @n: integer
 * Return: -1 if n is less than 0, factorial if n is greater than zero
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
