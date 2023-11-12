#include "main.h"

/**
 * _free - a safer way to free dynamically allocated memory
 * @ptr: pointer to memory location
 */

void _free(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
