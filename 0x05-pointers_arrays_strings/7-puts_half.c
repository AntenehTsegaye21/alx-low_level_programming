#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length of the string - 1) / 2
 * @str: input
 * Return:half of the input
 */

void puts_half(char *str)
{
	int a, n, longS;

	longS = 0;

	for (a = 0; str[a] != '\0'; a++)
		longS++;
	n = (longS / 2);

	if ((longS % 2) == 1)
	{
		n = ((longS + 1) / 2);
	}
	for (a = n; str[a] != '\n'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
