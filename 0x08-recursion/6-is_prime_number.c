#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (!(n % 2 == 0 || n % 3 == 0))
		return (1);
	return (0);
}
