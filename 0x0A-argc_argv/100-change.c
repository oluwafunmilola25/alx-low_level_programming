#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 or 1
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}

	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	coins += cents;
	printf("%d\n", coins);
	return (0);
}
