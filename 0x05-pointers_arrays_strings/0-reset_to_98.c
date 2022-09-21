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

	x = 402;
	printf("%d\n", x );
	reset_to_98(&x);
	printf("%d\n", x);

	x = -4096;
	printf("%d\n", x);
	reset_to_98(&x);
	printf("%d\n", x);

	x = INT_MAX;
	printf("%d\n", x);
	reset_to_98(&x);
	printf("%d\n", x);
}
