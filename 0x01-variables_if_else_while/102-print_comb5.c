#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: The numbers range from 0 to 99, and the combinations of numbers
 * are separated by a comma and a space. The combinations are printed in
 * ascending order, and all numbers are printed with two digits. The putchar
 * function is used to print the numbers, and no other functions are allowed.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
