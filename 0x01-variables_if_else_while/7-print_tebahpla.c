#include <stdio.h>

/**
 * main - prints the reverse alphabet lower case
 * Only use putchar
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
