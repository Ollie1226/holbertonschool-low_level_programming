#include <stdio.h>

/**
 * main - prints the alphabet lower case
 * Except q and e
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{

		}
		else
		{
			putchar(letter);
		}
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
