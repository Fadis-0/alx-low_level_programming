#include "main.h"
#include <stdlib.h>

/**
 * str_concat - fstrings that concatenates two strings
 * @s1: first input
 * @s2: second input
 * Return: concatenation result res
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	res = malloc(sizeof(char) * (i + ci + 1));

	if (res == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}

		while (s2[ci] != '\0')
	{
		res[i] = s2[ci];
		i++, ci++;
	}
	res[i] = '\0';
	return (res);
}

