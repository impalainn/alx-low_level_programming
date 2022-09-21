#include<stdio.h>
/**
 *main - Entry point
 * Description: 'prints arg'
 * Return: ALways 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

		while (alphabet <= 'z')
		{
			if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
			alphabet++;
		}
	putchar('\n');
	return (0);
}
