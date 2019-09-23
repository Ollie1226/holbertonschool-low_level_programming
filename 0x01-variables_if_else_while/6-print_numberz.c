#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Start from 0
 * Only putchar
 * Return: 0
 */

int main(void)
{
	char i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
