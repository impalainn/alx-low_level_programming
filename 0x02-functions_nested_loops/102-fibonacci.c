#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return - 0(Success)
 */

int main(void)
{
	long i;

	long j;

	long k;

	long temp;

	int count;

	i = 1;
	j = 2;
	printf("%d, ", 1);
	printf("%d, ", 2);
	count = 0;
	while(count <= 47)
	{
		k = i + j;
		printf("%ld", k);
		if(count < 47)
		{
			printf(", ");
		}

		temp = j;
		j = k;
		i = temp;
		count++;
		
	}
	printf("\n");
	return 0;
}
