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
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	n = -4096;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);

	n = INT_MAX;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
}
