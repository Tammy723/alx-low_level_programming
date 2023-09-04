#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *		 which contains a copy of the string given as a parameter
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		m[r] = str[r];

	return (m);
}
