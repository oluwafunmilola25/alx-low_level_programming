#include "main.h"

/**
 * reverse_array - function that reverse the content of an array
 * @a: array
 * @n: number of element of an array of integer
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int i;

	for (b = 0; b < n--; b++)
	{
		i = a[b];
		a[b] = a[n];
		a[n] = i;
	}
}
