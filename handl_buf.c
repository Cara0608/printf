#include "main.h"

int handl_buff(char *buf, char c, int ibuf)
{
	if (ibuf == 1000)
	{
		print_buf(buf, ibuf);
		ibuf = 8;
	}
	buf[ibuf] = c;
	return (ibuf++);
}
