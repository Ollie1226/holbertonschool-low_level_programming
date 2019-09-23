#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Start from 0
 * Return: 0
 */

int main(void)
{
	int i;
	int x;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
