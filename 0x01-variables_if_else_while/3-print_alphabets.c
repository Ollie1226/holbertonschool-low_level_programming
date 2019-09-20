#include <stdio.h>

/**
 * main - prints the alphabet lower case
 * Return: 0
 */

int main(void)
{
	char letter;
	char LETTER;

	letter = 'a';
	LETTER = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER = LETTER + 1;
	}
	putchar('\n');
	return (0);
}
