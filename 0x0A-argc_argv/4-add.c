#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints sum
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if success, 1 for error
 */
int main(int argc, char *argv[])
{
	int sum;

	int i;

	if (argc > 1)
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
