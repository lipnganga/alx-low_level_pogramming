#include <stdio.h>

/**
 * main - Function to print out its name
 * @argc: argc first param
 * @argv: an array of a command
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
