#include <stdio.h>

/**
 * main - entry point
 *
 * Return: zero on success
 */
int main(void)
{
	char* num = '0';

	while (num <= '9')
	{
		putchar( num );
		num++;
	}
	putchar( "\n" );

	return (0);

}
