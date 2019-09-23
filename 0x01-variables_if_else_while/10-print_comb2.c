#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Printed in ascending order
 * Start from 0
 * Only use 4xputchar
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '9')
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
