#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing single digits using putchar
 *		while using int variable
 *
 * Returm: 0 (Success)
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		/* convert digits into ASCII representation*/
		putchar(number + '0');
		number++;
	}
	putchar('\n');

	return (0);
}
