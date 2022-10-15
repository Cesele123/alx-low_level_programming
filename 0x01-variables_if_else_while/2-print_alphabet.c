#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lower cases
 * Return: void
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}

