#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, l;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > num2 && num22 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(l);
					if (num1 != 55 || num2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
