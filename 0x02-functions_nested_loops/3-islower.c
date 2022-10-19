#include "main.h"

/**
 *  _islower - checks for lower char
 *  @c: the char
 *  Return: one or zero
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
