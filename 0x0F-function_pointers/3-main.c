#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*newfunc)(int, int);
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	newfunc = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (!newfunc)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];

	if ((num2 == 0) && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = newfunc(num1, num2);

	printf("%d\n", result);

	return (0);
}
