#include "main.h"
#include<limits.h>
/**
 * reset_to_98 - updates value
 * @n: int variable
 */
void reset_to_98(int *n)
{
{
	*n = 98;
}
	int x;

	int y;

	int z;

	x = 402;
	printf("%d\n", x);
	reset_to_98(&x);
	printf("%d\n", x);

	y = -4096;
	printf("%d\n", y);
	reset_to_98(&y);
	printf("%d\n", y);

	z = INT_MAX;
	printf("%d\n", z);
	reset_to_98(&z);
	printf("%d\n", z);
}
