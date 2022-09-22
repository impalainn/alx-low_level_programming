#include"main.h"
/**
 * swap_int - swaps values of integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
