#include"main.h"
/**
 * swap_int - swaps values of integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	{
	*a = 42;
	*b = 98;
	}

	a = 98;
	b = 42;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
}
