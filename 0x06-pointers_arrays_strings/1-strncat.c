#include "main.h"

/**
 * *_strncat - concatenates two strings, uses n bytes fro src
 * @dest: pointer 1 to destination input
 * @src: pointer 2 to source input
 * @n: most number of bytes from source
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int c2;

	c = 0;

	while (dest[c])
		c++;
	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c + c2] = src[c2];

	dest[c + c2] = '\0';

	return (dest);
}
