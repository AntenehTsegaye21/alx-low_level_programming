#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char cha;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (cha = 'a'; cha <= 'f'; cha++)
		putchar(cha);
	putchar('\n');
	return (0);
}
