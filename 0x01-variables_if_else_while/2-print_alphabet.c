#include <stdio.h>

/**
 * main - prints the alphabet lower case
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
