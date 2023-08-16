#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *		separated by a comma, followed by a space
 *		printed in order
 * @n: input
 * Return:
 */

void print_to_98(int n)
{
	int num;

	if (n > 98)
		for (num = n; num > 98; num--)
			printf("%d, ", num);
		else
			for (num = n; num < 98; num++)
				printf("%d, ", num);
		printf("98/n");
}
