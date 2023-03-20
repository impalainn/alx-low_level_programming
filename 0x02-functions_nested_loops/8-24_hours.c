#include "main.h"
/**
 *jack_bauer - print every minute of the day
 * Return: Last digit
*/
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int j;

		for (j = 0; j <= 59; j++)
		{
			_putchar ('0' + i / 10);
			_putchar ('0' + i % 10);
			_putchar (':');
			_putchar ('0' + j / 10);
			_putchar ('0' + j % 10);
			_putchar ('\n');
		}

	}
}
