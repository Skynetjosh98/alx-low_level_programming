#include "main.h"

/**
 * print_alphabet - script to print the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char alp
		alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');
}
