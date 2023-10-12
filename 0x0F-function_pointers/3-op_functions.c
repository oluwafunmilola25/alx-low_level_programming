#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integer
 * @a: integer 1
 * @b: integer 2
 * Return: a sum b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integer
 * @a:integer 1
 * @b: integer 2
 * Return: a minus b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying integer
 * @a: integer 1
 * @b: integer 2
 * Return: a multiply by b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of an integer
 * @a: integer 1
 * @b: integer 2
 * Return: result of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulus of an integer
 * @a: integer 1
 * @b: integer 2
 * Return: the result of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
