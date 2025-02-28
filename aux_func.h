#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

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
int print_num(int n)
{
	long int con = 0;
        long int o = n % 10 + '0';

        if (n < 0)
        {
                if (n == INT_MIN)
			con += write(1, "-2147483648", 11);
		else
		{
			con += _putchar('-');
                	con += print_num(-n);
		}
        }
        if (n >= 0)
                if (n / 10 != 0)
                {
		   	con += print_num(n / 10);
                        con += write (1, &o, 1);
		}
	if (n / 10 == 0)
	{
		if (o < 48)
		{
			o -= '0';
			o *= -1;
		}
		con += write (1, &o, 1);
	}
        return (con);
}
#endif
