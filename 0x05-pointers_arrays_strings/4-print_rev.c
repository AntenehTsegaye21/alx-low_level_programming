#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longS = 0, o;

	while (*s != '\0')
	{
		longS++;
		s--;
	}

	s--;

	for (o = longS; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
