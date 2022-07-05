#include "main.h"

/**
* _isalpha -> Test the _isalpha function
*@c: Number to pass to _isalpha function
*Return: returns 0 or 1 depending on condition
*/
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
