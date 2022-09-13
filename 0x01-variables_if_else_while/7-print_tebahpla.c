#include <stdio.h>
/**
 * main - entry point
 * Description:  print lower alphabet in reverse
 * Return: zero on success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
