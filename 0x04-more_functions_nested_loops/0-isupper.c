#include "main.h"

/**
 * _isupper - Function checks for uppercase character
 * @c: Argument to be evaluated
 *
 * Return: 1 if c is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
