#include "main.h"

/**
 * print_times_table - prints the n time table
 *
 * @n: takes number input
 */

void print_times_table(int n)
{
	int product, multiple, number;

	if (n <= 15 && n >= 0)
	{
		for (number = 0; number <= n; ++number)
		{
			_putchar(48);
			for (multiple = 1; multiple <= n; ++multiple)
			{
				_putchar(',');
				_putchar(' ');

				product = number * multiple;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
				else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

