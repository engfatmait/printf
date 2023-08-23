#include "main.h"
/**
 * handle_str - print string
 * @args: input string
 * Return: num of characters
*/
int handle_str(va_list args)
{
	char *str;
	char *buf = "(null)";
	int count = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		write(1, buf, 6);
		count = 6;
		return (-1); 
	}
	else
	{
		write(1, str, _strlen(str));
		count += _strlen(str);
	}
	return (count);

}
