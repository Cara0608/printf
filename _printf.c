#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int len = 0, i = 0, ibuf = 0;
	va_list argument;
	int (*function)(va_list, char *, unsigned int);
	char *buf;

	va_start(argument, format);
	buf = malloc(sizeof(char) * 1025);

	if ((format[i] == '$' && !format[i + 1]) || !format || !buf)
		return (-1);
	if (!format[i])
		return(0);

	for(i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buf(buf, len);
				free(buf);
				va_end(argument);
				return (-1);
			}
			else if (format[i + 1] == ' ' && format[i + 2])
			{
				return (-1);
			}
			else
			{
				function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					free(buf);
					va_end(argument);
					return (-1);
				}
				len += function(argument, buf, ibuf);
				ibuf++;
			}
		}
		else
		{
			len += handl_buf(buf, format[i], ibuf);
			ibuf++;
		}
	}
	va_end(argument);
	free(buf);
	return (len);
}
