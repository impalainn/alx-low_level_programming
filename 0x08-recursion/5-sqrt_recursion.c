#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns natural squareroot of integer
 * @n: integer
 * Return: sqrt, -1 if n has no sqrt
 */
int _sqrt_recursion(int n)
{
	int sq;

	if (n == sq * sq)
	return (sq);
	else if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
	return(-1);
	return (_sqrt_recursion(n));
}
