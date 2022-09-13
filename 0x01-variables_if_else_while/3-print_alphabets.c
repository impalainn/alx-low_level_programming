#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints arg'
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

char ALPHABET = 'A';

while (alphabet <= 'z' && ALPHABET <= 'Z')
	{
	putchar(alphabet && ALPHABET);
	alphabet++;
	ALPHABET++;
	}
putchar('\n');
return (0);
}
