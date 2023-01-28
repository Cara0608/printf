#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main- Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Lets try to print a simple address.\n");
	len2 = printf("Lets try to print a simple sentence.\n");

	printf("_printf: %d\nprintf: %d\n", len, len2);

	return (0);
}
