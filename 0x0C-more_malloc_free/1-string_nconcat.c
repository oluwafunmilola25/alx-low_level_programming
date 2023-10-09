#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a program that concatenates two strings
 * @s1: string parameter 1
 * @s2: string parameter 2
 * @n: number of space to be allocated
 * Return: a pointer to the new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_ptr = 0;
	unsigned int result;
	unsigned int i;
	unsigned int j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2len++;

	if (n >= s2len)
		n = s2len;

	result = s1len + n;
	new_ptr = malloc(result + 1);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		new_ptr[s1len + j] = s2[j];

	new_ptr[result] = '\0';

	return (new_ptr);
}
