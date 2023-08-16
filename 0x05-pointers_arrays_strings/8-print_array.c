#include "main.h"
  
/**
 * print_array - prints elements of an array of integers
 * @a: array pointer
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int j = 0, i;

	if(n < 0)
	{
		n = 1;
	}

	printf("%d", *a);
	for(i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}


