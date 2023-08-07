#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int i  = 0, a;

	while (i < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 9)
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}
			a++;
		}
		_putchar('\n');
		i++;
	}
}
