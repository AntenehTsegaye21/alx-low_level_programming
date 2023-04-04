#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @s: memory where is stored
 * @b: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *s, char b, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
