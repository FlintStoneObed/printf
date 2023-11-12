#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate dynamic memory
 * @old_mem_blk: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: a pointer to the newly allocated memory,
 * or NULL if the request failed
 */

void *_realloc(void *old_mem_blk, size_t old_size, size_t new_size)
{
	void *new_mem_blk;
	size_t min_size;

	if (new_size == old_size)
		return (old_mem_blk);

	if (new_size == 0 && old_mem_blk != NULL)
	{
		free(old_mem_blk);
		return (NULL);
	}

	new_mem_blk = malloc(new_size);
	if (new_mem_blk == NULL)
		return (NULL);

	if (old_mem_blk != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;

		memcpy(new_mem_blk, old_mem_blk, min_size);

		free(old_mem_blk);
	}

	return (new_mem_blk);
}
