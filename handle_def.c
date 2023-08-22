#include "main.h"
/**
 * handle_def - to handle non standard format
 * @format: input format
 * Return: integer num of characters
*/
int handle_def(const char *format)
{
	int count = 0;

	count += write(1, (format - 1), 1);
	count += write(1, format, 1);
	return (count);
}
