#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_format_specifiers - creates an array of structs to hold
 * functions for handling format string
 *
 * Return: an array of format specifiers
 */

format_specifiers *create_format_specifiers(void)
{
	static format_specifier specifiers[] = {
		{'d', 0, 0, 0, 0, 0, 0, 0, 0, handle_decimal},
		{'i', 0, 0, 0, 0, 0, 0, 0, 0, handle_decimal},
		{'c', 0, 0, 0, 0, 0, 0, 0, 0, handle_char},
		{'%', 0, 0, 0, 0, 0, 0, 0, 0, handle_percent},
		{'s', 0, 0, 0, 0, 0, 0, 0, 0, handle_string},
		{'S', 0, 0, 0, 0, 0, 0, 0, 0, handle_custom_string},
		{'r', 0, 0, 0, 0, 0, 0, 0, 0, handle_string_reversal},
		{'R', 0, 0, 0, 0, 0, 0, 0, 0, handle_rot13},
		{'x', 0, 0, 0, 0, 0, 0, 0, 0, handle_hex_lower},
		{'X', 0, 0, 0, 0, 0, 0, 0, 0, handle_hex_upper},
		{'b', 0, 0, 0, 0, 0, 0, 0, 0, handle_binary},
		{'o', 0, 0, 0, 0, 0, 0, 0, 0, handle_octal},
		{'u', 0, 0, 0, 0, 0, 0, 0, 0, handle_unsigned_int},
		{'p', 0, 0, 0, 0, 0, 0, 0, 0, handle_print},
	};

	/* calculate the number of specifiers in the array */
	size_t num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);

	/* allocate memory for the format_specifiers array and copy the content */
	format_specifiers *format_specifiers = malloc(
			num_specifiers * sizeof(format_specifiers));

	/* verify memory allocation was successful before continuing */
	if (format_specifiers == NULL)
	{
		return (NULL);
	}

	memcpy(
			format_specifiers, specifiers, num_specifiers * sizeof(format_specifiers));

	return (format_specifiers);
}
