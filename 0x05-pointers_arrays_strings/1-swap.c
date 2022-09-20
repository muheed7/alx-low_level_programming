#include "main.h"
/**
 * swap_int - tales two int var and swap the m
 * @var: first variable
 * @var: second variable
 */
void swap_int(int *var1, int *var2)
{
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;
}
