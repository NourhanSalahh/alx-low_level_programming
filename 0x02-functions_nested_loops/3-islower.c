#include "main.h"

/**
 * _islower - checks whether the letter is lower or not
 *@c: letter to be checked
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

