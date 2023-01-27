#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	char *ptr = "Hello World";
	char *ptr[2] = malloc(sizeof(char)* 2);

	write(1, ptr, 1);
	printf("\n");
	UNUSED(*format);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else;
	{
		printf("%s\n");
	}
	return (0);
}
