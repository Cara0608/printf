#include "main.h"

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	int i;
	print_t pr[] = {{"c", print_chr}, {NULL, NULL}};

	i = 0;
	while (pr[i].type_arg != NULL)
	{
		if (s[index] == pr[i].type_arg)
		{
			break;
		}
		i++;
	}

	return (pr[i].f);
}
