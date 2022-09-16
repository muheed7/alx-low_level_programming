#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int x;

	for (x = 0; x < 15; x++)
	{
		_putchar(x * '10');
		_putchar('\n');
	}
	_putchar('\n');
}
