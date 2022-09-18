#include<stdio.h>
/**
 * main - Entry point
 * Description: 'prints arg'
 * Return: Always 0 (success)
 */
int main(void)
{
int x;

for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
if (x > 9)
{
	putchar('a');
	putchar('b');
	putchar('c');
	putchar('d');
	putchar('e');
	putchar('f');
}
putchar('\n');
return (0);
}

