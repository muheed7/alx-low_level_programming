#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description: print alphabets
 * Return: zero on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar("\n");
	return (0);
}
