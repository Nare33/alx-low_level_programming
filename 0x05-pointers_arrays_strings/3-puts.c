#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
