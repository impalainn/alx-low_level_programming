#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'print sign word'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d\n", n);
	/* your code goes there */
if (n > 0)
printf("98 is positive\n");
else if (n < 0)
printf("-98 is negative\n");
else
printf("0 is zero\n");
	return (0);
}
