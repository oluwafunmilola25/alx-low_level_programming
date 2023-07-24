#include "main.h"

/**
 * swap_int - swaps the value of two intgers
 * @a: parameter 1
 * @b: parameter 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
