#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv:argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
