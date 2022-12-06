#include "main.h"

/**
 * string_to_number - Function to convert string to number
 * @src: parameter that takes a const char * value
 * Return: value converted from string to integer
 */

int string_to_number(const char *src)
{
	int i;
	i = atoi(src);

	return i;
}
