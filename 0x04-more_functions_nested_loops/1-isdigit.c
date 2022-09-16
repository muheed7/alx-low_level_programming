#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if a var is digit
 * @c: variable to be checked
 * Return: 1 if var is digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	return (0);
}
