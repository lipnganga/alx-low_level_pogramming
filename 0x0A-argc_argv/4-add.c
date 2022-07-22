#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to add two positive numbers
 * @argc: argc first param
 * @argv: an array of a command
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num1 = 0, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
			printf("Error\n");
				return (1);
			}
		}
		num1 += atoi(argv[i]);
	}
	printf("%d\n", num1);
	return (0);
}
