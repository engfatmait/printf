#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: integer (num of characters printed)
*/
int _printf(const char *format, ...)
{
	int num_arg = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			num_arg++;
		}
		else
		{
			format++;
			switch (*format)
			{
			case '\0': return (-1);
				break;
			case 'c':
				num_arg = handle_c(args);
					break;
			case 's':
				num_arg = handle_str(args);
					break;
			case '%':
				 write(1, format, 1), num_arg++;
					break;
			default:
				num_arg = handle_def(format);
			}
		}
	format++;
	}
	va_end(args);
	return (num_arg);
}
