#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * _putchar - Writes the character c
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1.
 */
int _putchar(char c)
{
	int ret = 0;

	(write(1, &c, 1));
	ret++;

	return (ret);
}

int print_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
#endif
