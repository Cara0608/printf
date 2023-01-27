#include "main.h"

int print_chr(va_list argument, char *buf, unsigned int ibuf);
{
	char c;

	c = va_arg(argument, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
