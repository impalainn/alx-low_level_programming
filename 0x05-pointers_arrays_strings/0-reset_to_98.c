#include<stdio.h>
#include "main.h"
/**
 * main - updates value
 * Return: 0
 */
int main(void)
{
	int n;

	n = 402;
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}

