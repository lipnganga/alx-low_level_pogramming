#include "main.h"

/**
*test_isalpha -> checks for alphabetical letters
*@c: a character to be checked on
*Return: returns o or 1 depending on condition
*/
void test_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c  >= 'A' && c <= 'Z'));
}
