#include "main.h"

/**
 *print_line - a function that draws a straight line in the terminal
 *@n: number of times character (_) will be printed
 *Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar("_");
		_putchar('\n');
	}
}