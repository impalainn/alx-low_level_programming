#include "main.h"
/**
 * _strncpy -  copies string
 * @dest: string copied to
 * @src: string copied
 * @n: number of chars copied
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
