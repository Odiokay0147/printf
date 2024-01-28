nclude "main.h"
/**
 * print_number - function that prints a decimal integer number
 * @args: arguments
 *
 * Return: number of character
 */
int d_printfdint(va_list args)
{
	int x;
	unsigned int numb, rm, i, dvd = 1, y = 0;
	
	x = va_arg(args, int);
	if (x < 0)
	{
		numb = x * -1;
		_putchar('-');
		y++;
	}
	else
	{
		numb = x;
	}
	
	rm = numb;
	
	while (rm > 9)
	{
		dvd *= 10;
		rm /= 10;
	}
	
	for (i = 0; div > 0; dvd /= 10, i++, y++)
	{
		_putchar(((numb / dvd) % 10) + '0');
	}
	return (y);
}
