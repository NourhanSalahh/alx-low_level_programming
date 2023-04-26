#include "main.h"

/**
 * print_sign - print the sign of input
 * @n: input to be checked
 * Return: 1 and print + if input is greater than zero
 * 0 and print 0 if input equal 0
 * -1 and prints - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
} else if (n == 0)
{
		_putchar(48);
		return (0);
	} else if (n <= 0)
	{
		_putchar('-');
	}
return (-1);
}
