#include <stdio.h>
#include <stdlib.h>
#include "aux_func.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
int i;
int o;
va_list args;
char *str;

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
			case 's':
				i++;
				str = (va_arg(args, char *));
				for (o = 0; str[o] != '\0'; o++)
					_putchar(str[o]);
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
