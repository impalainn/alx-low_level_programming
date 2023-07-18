#include <stdio.h>
/**
 * main - computes and prints sum of all multiples of 3 or 5 below 1024;
 * return: sum
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}

	}
	printf("%d\n", sum);
	return sum;
}
