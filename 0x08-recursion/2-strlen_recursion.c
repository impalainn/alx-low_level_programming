#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string
 * Return: strlength
 */
int _strlen_recursion(char *s)
{
	int len = strlen(s);

	if ( len == 1 )
		return (1);
	return (1 + _strlen_recursion(s + 1));
}
