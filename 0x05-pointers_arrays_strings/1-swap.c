#include"main.h"
/**
 * swap_int - swaps values of integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	{
	*a = 42, *b = 98;
	}
	{

	int x;

	int y;

	x = 98;
	y = 42;
	printf("%d, %d\n", x, y);
	swap_int(&x, &y);
	{
	printf("%d, %d\n", y, x);
	}
	}
}
