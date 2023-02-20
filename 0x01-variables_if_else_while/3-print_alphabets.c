#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase,
 *        followed by a new line using the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}




