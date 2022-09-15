#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: special parameter
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k = -1 * (n % 10);
	else
		k = n % 10;

	_putchar((k) + '0');

	return (k);
}
