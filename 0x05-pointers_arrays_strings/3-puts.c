#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: pointer to a character array
 *
 * Description: prints a string
 * Return: nothing
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;
	}
	putchar('\n');

}
