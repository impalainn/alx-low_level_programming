#include "main.h" 
/**
 * leet - converts string to leet
 * @c: char string pointer
 * Return: char pointer
 */
char *leet(char *c)
{
	int i = 0 , j;
	char numbers[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'A', 'E', 'O', 'T', 'L'};

	while (*(c + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if(*(c + i) == letters[j] || *(c + i) - 32 == letters[j])
			{
				*(c + i) = numbers[j];
			}
		}
		i++;
	}

	return (c);
}
