#include "main.h"

int print_buf(char *buf, int nbuf)
{
	return (write(1, buf, nbuf));
}
