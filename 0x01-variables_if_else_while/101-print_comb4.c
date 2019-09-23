#include <stdio.h>

/**
 * main - prints all three  digits of base 012, 120, 102
 * Printed in ascending order
 * Start from 0
 * Only use 6xputchar
 * Return: 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x = 9; x++)
	{
		for (y != 'x'; y = x + 1; y++)
		{
			for (z != 'y'; z = y + 1; z++)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			}
			if (x == 7 && y == 8 && z == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
