#include "main.h"
/**
 * _isalpha-check for alphabetic character
 * @c: is the character to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
