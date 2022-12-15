#include "main.h"
/**
 * _strlen - returns strlen
 * @s: pointer to string
 * Return: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
