#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 - 100, followed by a new line
 * but for multiples of three prints 'Fizz' instead of the number
 * and for multiples of five prints 'Buzz'
 * and for multiples of both three and five 'FizzBuzz'
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0)
		{
			printf(" Buzz");
		} else
		{
			printf(i == 1 ? "%d" : " %d", i);
		}
	}
	printf("\n");

	return (0);
}
