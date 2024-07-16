#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes the character c
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
