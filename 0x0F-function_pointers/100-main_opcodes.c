#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%02x", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
