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
	char nill[] = "(nill)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (x = 0, nill[x] != '\0'; x++)
		{
			_putchar(nill[x]);
		}
		return (6)
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	return (x);
}
