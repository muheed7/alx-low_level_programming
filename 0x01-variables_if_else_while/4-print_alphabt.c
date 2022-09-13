#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero on success
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);

		letter++;
	}
	putchar('\n');

	return (0);
}
