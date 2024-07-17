#include <stdio.h>
#include <stdlib.h>
#include "aux_func.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
int i;
va_list args;
va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
	if (format[i] == '%')
		switch (format[i + 1])
		{
			case 'c': 
          			i++;
				_putchar(va_arg(args, int));
				break;
			case '%':
				_putchar('%');
				break;
		}
	else
      		_putchar(format[i]);
}
return(i);
}
