#include <unistd.h>

/**
 * Only _putchar
 * prints Holberton
 */

int main(void)
{
	char Holberton;

	Holberton = 'a';

	putchar(a);
	putchar('\n');
	return (0);
}


#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
