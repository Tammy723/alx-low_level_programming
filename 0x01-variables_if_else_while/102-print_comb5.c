#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int firstDig = 0, secondDig;

	while (firstDig <= 99)
	{
		secondDig = firstDig;
		while (secondDig <= 99)
		{
			if (secondDig != firstDig)
			{
				putchar((firstDig / 10) + 48);
				putchar((firstDig % 10) + 48);
				putchar(' ');
				putchar((secondDig / 10) + 48);
				putchar((secondDig % 10) + 48);

				if (firstDig + secondDig != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDig++;
		}
		firstDig++;
	}
	putchar('\n');

	return (0);
}
