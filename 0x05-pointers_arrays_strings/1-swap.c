#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer one to swap
 * @b: integer two to swap
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
