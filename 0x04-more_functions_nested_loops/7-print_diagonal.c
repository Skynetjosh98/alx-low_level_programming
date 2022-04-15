#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int a;
		int count = a;

		while (a < n)
		{
			for (b = 0; b < count; b++)
			{
				_putchar(' ');
				_putchar('\\');
			}
			a++;
		}
		_putchar('\n');
	}

}

