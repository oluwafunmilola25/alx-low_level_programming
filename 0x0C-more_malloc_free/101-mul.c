#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * is_digit - checks a string
 * @s: string
 * Return: 0 or 1
 */

int is_digit(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * mul - multiplies two integer
 * @num1: parameter 1
 * @num2: parameter 2
 * Return: length
 */

int mul(int num1, int num2)
{
	return num1 * num2;
}

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

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = mul(num1, num2);
	printf("%d\n", result);

	return (0);
}
