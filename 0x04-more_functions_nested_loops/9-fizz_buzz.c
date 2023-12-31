#include <stdio.h>
#include "main.h"

/**
 * main - prints 1-100, with substitutions
 *
 * Description:  Substitutes Fizz if div by 3, Buzz, if div by 5
 * FizzBuzz if divisible by both
 * Return: 0 Always success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			if (i == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
