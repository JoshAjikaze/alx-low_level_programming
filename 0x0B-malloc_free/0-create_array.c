#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	(void) c;

	if (size == 0)
		return (NULL);
	array = malloc(size * (sizeof(char)));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= (size - 1); i++)
	{
		array[i] = c;
	}
	return (array);
}
