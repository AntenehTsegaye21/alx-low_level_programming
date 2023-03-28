#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length of the string - 1) / 2
 * @str: input
 * Return: half of the input
 */

void puts_half(char *str)
{
	int a, n, longs;

	longs = 0;

	for (a = 0; str[a] != '\0'; a++)
		longs++;

	n = longs / 2;

	if (longs % 2 != 0)
		n++;

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
