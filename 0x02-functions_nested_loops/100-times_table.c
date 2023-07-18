#include "main.h"
/**
 * times_table - print times n by n times table
 * Return: void
 */

void print_times_table(int n)
{
	int i;

	if(n < 0 || n > 15)
	{
		return;
	}

        for(i = 0; i <= n; i++)
        {
                int j;
                for(j = 0; j <= n; j++)
                {
                        int product = i* j;
                        printf("%d", product);
                        if((i < n || j < n) && j != n)
                        {
                                printf(",");
                                printf(" ");
                                if( i * (j+1) < 10)
                                {
                                        printf(" ");
                                }
				if( i * (j+1) < 100)
                                {
                                        printf(" ");
                                }
                        }
                }
                printf("\n");
        }
}
