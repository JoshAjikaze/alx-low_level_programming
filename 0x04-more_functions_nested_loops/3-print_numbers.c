#include "main.h"

/**
 * print_numbers - Prints numbers 0-9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		if (i == 9)
			_putchar('\n');
	}
}
