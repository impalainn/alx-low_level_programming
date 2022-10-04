#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints product of two integers
 * @argc: number of argumets
 * @argv: array of strings
 * Return: 0 if success, 1 if errror
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

