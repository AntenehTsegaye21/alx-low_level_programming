#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char st;

	for (st = 'z'; st >= 'a'; st--)
		putchar(st);
	putchar('\n');
	return (0);
}
