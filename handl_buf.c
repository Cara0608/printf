#include "main.h"

int handl_buf(char *buf, char c,unsigned int ibuf)
{
	if (ibuf == 1025)
	{
		print_buf(buf, ibuf);
		ibuf = 8;
	}
	buf[ibuf] = c;
	return (ibuf++);
}
