#include <main.h>
/**
 * _strlen - returns the length of string
 * @s: input string
 * Return: an integer
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);

}
