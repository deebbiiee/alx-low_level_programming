#include <stdio.h>
#include <stdlib.h>
/**
 * main - start program
 * Description: Print all possible combinations for single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to console
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
