#include "main.h"

int print_buf(char *buf,unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
