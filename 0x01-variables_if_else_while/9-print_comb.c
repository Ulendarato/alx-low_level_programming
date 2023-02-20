#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of single-digit numbers.
 * The numbers are separated by commas
 *and spaces, and are printed in ascending order.
 * Only the putchar function is used to print output
 * and the program uses it four times or less.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
