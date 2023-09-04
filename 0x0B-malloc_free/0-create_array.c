#include "main.h"

/**
 * *create_array -  function that creates an array of chars
 *			and initializes it with a specific char.
 * @size: size of an array
 * @c: char to initialize
 * Return: 0 or array
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;

	return (0);
}
