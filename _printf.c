#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: integer (num of characters printed)
*/
int _printf(const char *format, ...)
{
	int num_arg = 0;
	char *str;
	char a;
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
<<<<<<< HEAD
			{
			case '\0':
				break;
			case 'c':
				{
					a = va_arg(args, int), write(1, &a, 1), num_arg++;
=======
			{case '\0': return (-1);
				break;
			case 'c':
				a = va_arg(args, int), write(1, &a, 1), num_arg++;
>>>>>>> 2020aeedf52fc5a76f28a68e115862c3dcc7ee42
					break;
			case 's':
				{
					str = va_arg(args, char*), write(1, str, strlen(str)); num_arg += strlen(str);
					break;
			       	}
			case '%':
<<<<<<< HEAD
				{
					  write(1, format, 1), num_arg++;
					  break;
				}
=======
				write(1, format, 1), num_arg++;
					break;
			case ' ': return (-1);
					break;
>>>>>>> 2020aeedf52fc5a76f28a68e115862c3dcc7ee42
			}
		}
	format++;
	}
	va_end(args);
	return (num_arg);
}
