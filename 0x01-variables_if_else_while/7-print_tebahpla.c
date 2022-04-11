#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char pla;

	for (pla = 'z'; pla >= 'a'; pla--)
	{
		putchar(pla);
	}
	putchar('\n');
	return (0);
}
