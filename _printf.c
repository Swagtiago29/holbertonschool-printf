#include <stdlib.h>
#include "aux_func.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list args;
	char *str;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{	i++;
			switch (format[i])
			{
				case 'c':
					counter += _putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						counter += write(1, "(null)", 6);
						break;
					}
					else
					{
						counter += print_string(str);
						break;
					}
				case '%':
					counter += _putchar('%');
					break;
				default:
					if(format[i] == '\0')
						return (-1);
					else
					{	
						counter += _putchar('%');
						counter += _putchar(format[i]);
					}
			}
		}
		else
		{
			_putchar(format[i]);
				counter++;
		}
	}
	va_end(args);
	return (counter);
}
