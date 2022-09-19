#include<stdio.h>
void reset_to_98(int x)
{
	x = 98;
}
/**
 * main - updates value
 * Return: 0
 */
int main(void)
{
	int n;

	n = 402;
	reset_to_98(n);
	return (0);
}

