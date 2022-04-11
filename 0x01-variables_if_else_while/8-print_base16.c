#include <stdio.h>

/**
 * main - prints all the numbers of base 16,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_hex;
	char alp_hex;

	for (num_hex = 48; num_hex < 58; num_hex++)
	{
		putchar(num_hex);
	}
	for (alp_hex = 'a'; alp_hex <= 'f'; alph_hex++)
	{
		putchar(alp_hex);
	}
	putchar('\n');
	return (0);
}
