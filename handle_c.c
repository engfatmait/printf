#include "main.h"
/**
 * handle_c - print character
 * @arg: input character
 * Return: num of characters printed
*/
int handle_c(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	write(1, &a, 1);
	return (1);
}
