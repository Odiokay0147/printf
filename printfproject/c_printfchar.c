#include "main.h"
/**
 * c_printfchar - function that prints a character
 * @args: arguments
 * Return: 1
 */
int c_printfchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
