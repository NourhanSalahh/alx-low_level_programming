#include "main.h"
/**
 * _isupper - checks whether char is uppercase or not
 * @c: char to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
