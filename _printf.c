#include <stdlib.h>
#include "aux_func.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
int i, o, counter = 0;
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
				counter++;
				break;
			case 's':
				i++;
				str = (va_arg(args, char *));
				if (str == NULL)
				{
					write(1, "(null)", 6);
					break;
				}
				for (o = 0; str[o] != '\0'; o++)
				{	
					_putchar(str[o]);
					counter++;
				}	
				break;
			case '%':
				_putchar('%');
				counter++;
				break;
		}
	else
	{
      		_putchar(format[i]);
		counter++;
	}
}
va_end(args);
return(counter);
}
