#include<stdio.h>
/**
 * main - Entry point
 * Description: 'prints arg'
 * Return: Always 0 (success)
 */
int main(void)
{
int x;

char alphabet = 'a';

for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
if (x > 9)
	while (alphabet <= 'f')
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}

