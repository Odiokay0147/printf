#include "main.h"

/**
 * _putchar - function to write character of stdout
 * @c: character to be printed
 * Return: 1 on success
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
