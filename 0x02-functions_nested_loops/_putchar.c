#include <unistd.h>

/**
*_putchar - writes the charactor c to stdout
* @c: The character to print
* Return: On success 1.
*On error, -1 is return, and errno is set accordingly.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
