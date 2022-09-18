#include<stdio.h>
/**
 * main - Entry point
 * Description: 'prints arg'
 * Return: Always 0 (success)
 */
int main(void)
{
int x;

for (x = 0; x < 16; x++)
{
putchar(x + '0');
}
putchar('\n');
return (0);
}

