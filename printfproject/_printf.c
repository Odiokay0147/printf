#include <stdarg.h>
#include <stdio.h>

/**
* _printf - a function that produces output according to a format
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int numOfChar = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		if (*format == 'c')
		{
			char c = (char)va_arg(agrs, int);

			putchar(c);
			numOfChar++;
		}
		else if (*format == 's')
		{
			char *s = va_arg(agrs, char *);

			while (*s)
			{
				putchar(*s);
				s++;
				numOfChar++;
			}
		}
		else if (*fomart == '%')
		{
			putchar('%');
			numOfChar++;
		}
		else
		{
			putchar(*format);
			numOfChar++;
		}
		format++
	}
	va_end(args);
	return (numOfChar);
}
