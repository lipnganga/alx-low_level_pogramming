#include "main.h"

/**
*test_isalpha -> Test the _isalpha function
*
*@c: Number to pass to _isalpha function
*/
void test_isalpha(int c)
{
	int r;

	r = _isalpha(c);
	_putchar(r + '0');
	_putchar('\n');
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	test_isalpha('H');
	return (0);
}
