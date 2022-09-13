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
		if (letter == 'e')
			letter++;
		else if (letter == 'q')
			letter++;
		else
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
