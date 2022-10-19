#include "main.h"
#include <unistd.h>

/**
 * -putchar - outpust char
 *  @c: printed char
 *
 *  Return: void
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
