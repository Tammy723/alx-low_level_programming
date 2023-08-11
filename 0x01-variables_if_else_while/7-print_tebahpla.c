#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the lowercase alphabet in reverse
 *
 * Return: (0)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
