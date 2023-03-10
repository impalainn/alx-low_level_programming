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
	int sum = 0, i, k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
