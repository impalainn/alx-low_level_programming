#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/*
 * more headers goes there
 */

/*
 * betty style doc for function main goes there
 */

/* main - main entry point
 * Description: prints conditional arg
 * Return: Always 0 (success)
 */
int main(void)
{
	/* local variable definition */
	int n;

	if (n > 0)
		printf("The number is positive\n");
	else if (n == 0)
	       printf("The number is zero\n");
	else if (n < 0)
	printf("The number is negative\n");

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
