#include "main.h"

/**
 * _isdigit - checks whether the input is a digit from 0 to 9 or not
 * @c: digit to be checked
 * Return: 1 id c is between 0 to 9, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
