#include "main.h"
/**
 * times_table - print times 9 by 9 times table
 * Return: void
 */

void times_table(void)
{
	int i;
	for(i = 0; i <= 9; i++)
	{
		int j;
		for(j = 0; j <= 9; j++)
		{
			int product = i* j;
			printf("%d", product);
			if((i < 9 || j < 9) && j != 9)
			{
				printf(",");
				printf(" ");
				if( i * (j+1) <10)
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
