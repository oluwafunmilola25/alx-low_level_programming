#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int coin[5];
	int cents = 0;
	int money;
	int result;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	coin[0] = 25;
	coin[1] = 10;
	coin[2] = 5;
	coin[3] = 2;
	coin[4] = 1;

	result = sizeof(coin) / sizeof(coin[0]);

	for (i = 0; i < result; i++)
	{
		cents += money / coin[i];
		money %= coin[i];
	}
	printf("%d\n", cents);
	return (0);
}
