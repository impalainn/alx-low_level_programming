#include "main.h"
/**
 * print_to_98 - prints all naturl numbers from n to 98
 * @n: integer from which to print
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 97; i++)
			printf("%d, ",  i);
	else
	{
		for (i = n; i >= 99; i--)
			printf("%d, ", i);
	}
	printf("%d\n", 98);
}


