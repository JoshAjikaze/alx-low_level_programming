#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Memory area to fill.
 * @b: Constant byte.
 * @n: Number of byte to fill.
 *
 * Return: String with filled byte values.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
