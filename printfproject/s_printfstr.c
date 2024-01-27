#include "main.h"
/**
 * s_printfstr - prints a string of character
 * @args: arguments
 * Return: x
 */
int s_printfstr(va_list args)
{
	int x;
	char *str;
	char null[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (r = 0, null[x] != '\0'; x++)
			-putchar(null[r]);
		return (6)
	}
	for (r = 0; str[r] != '\0'; x++)
	{
		_putchar(str[r]);
	}
	return (x);
}
