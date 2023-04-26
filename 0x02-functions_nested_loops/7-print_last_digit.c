#include "main.h"

/**
 * print_last_digit - prints the last digit of input
 * @n: the input where we get from it last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int temp;

	if (n < 0)
	n = -n;

	temp = n % 10;

	if (temp < 0)
		temp = -temp;

	_putchar(temp + '0');

	return (temp);
}

