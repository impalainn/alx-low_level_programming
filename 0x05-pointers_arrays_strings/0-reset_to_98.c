#include "main.h"
#include<limits.h>
/**
 * reset_to_98 - updates value
 * @n: int variable
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - entry point
 * Description: 'prints arg'
 * Return: 0
 */
int main(void)
{
	int x;

	int y;

	int z;

	x = 402;
	y = -4096;
	z = INT_MAX;
	printf("%d\n", x);
	reset_to_98(&x);
	printf("%d\n", x);
	printf("%d\n", y);
	reset_to_98(&y);
	printf("%d\n", y);
	printf("%d\n", z);
	reset_to_98(&z);
	printf("%d\n", z);
	return (0);
}
