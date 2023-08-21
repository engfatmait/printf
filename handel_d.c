#include "main.h"
/**
 * handle_d - handles two states i and d
 *
 * @format: its a variadic function
 *
 * Return: int value of the function
 */




int handle_d(const char *format, ...)
{
	int x;
	va_list args;

	va_start(args, format);

	int i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
				case 'i':
					{
						x = va_arg(args, int);
						write(1, &x, 1);
						break;
					}
			}
		}
	format++;
	}
	return (args)
	va_end(args);
}
