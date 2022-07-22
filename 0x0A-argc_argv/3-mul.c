#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to multiply two numbers
 * @argc: argc first param
 * @argv: an array of a command
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, n, m;

		if (argc != 3)
		{
			printf("%s\n", "Error");
			return (1);
		}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	result = n * m;

	printf("%i\n", result);

	return (0);
}
