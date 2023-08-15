#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number
 *@i: function parameter
 * Return: l
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (i < 0)
		l = -l;
	_putchar(l + '0');
	return (l);

}
