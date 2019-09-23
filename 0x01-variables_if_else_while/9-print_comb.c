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
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
