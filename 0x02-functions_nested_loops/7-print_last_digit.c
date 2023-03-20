#include "main.h"
int print_last_digit(int k)
{
	int m = k%10;

	if (k < 0)
        {
              m = -m;
        }
	_putchar('0' + m);
	return m;
}
