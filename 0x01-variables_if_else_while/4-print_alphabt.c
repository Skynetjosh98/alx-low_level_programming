#include <stdio.h>

/**
 * main - prints the alphabets in lowercase,
 * except q and e, followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
