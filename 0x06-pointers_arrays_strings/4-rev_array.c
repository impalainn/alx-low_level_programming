#include "main.h"
/**
 * reverse_array - reverses  content of an array of integers
 * @a: array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, rev, el;

	if (n % 2 == 0)
		el = n;
	else
		el = n - 1;
	for (i = 0; i < el / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - 1];
		a[n - 1] = rev;
		n--;
	}
}
