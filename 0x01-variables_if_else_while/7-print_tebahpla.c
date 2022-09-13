#include <stdio.h>
/**
 * main - entry point
 * description:  print lower alphabet in reverse
 * return: zero on success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
