#include <unistd.h>

/**
 * _putchar - writes character
 * @c: character to print
 * Return: one
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
