#include "main.h"

/**
 * main - check the code
 * Description: print the complete alphabet
 * Return: zero on success
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}

	_putchar('\n');
}
