#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Start from 0
 * Only putchar
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
