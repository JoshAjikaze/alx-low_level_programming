#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name to print
* @f: function to call to print
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
