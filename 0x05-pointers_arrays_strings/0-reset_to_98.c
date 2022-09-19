#include<stdio.h>
/**
 * main - updates value
 * Return: 0
 */
int main(void)
{
	int p = 8;

	int *n;

	n = &p;
	*n = 98;
	return (0);
}

