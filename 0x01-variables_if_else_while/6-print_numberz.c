#include <stdio.h>
/**
 * main - entry point
 * Description: Numbers
 * Return: zero on success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar("\n");

	return (0);
}
