#include <stdio.h>
/**
 * main - entry point
 * description: print numbers with baseline 16
 * return: zero on success
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
