#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{

	if (n <= 0) 
	{
		_putchar('\n');
	} else 
	{
		int a;

		while (a <= n)
		{
			_putchar('_');
			a+=1;
		}
		_putchar('\n'); 
	}
	
}
