#include <stddef.h>
#include <stdlib.h>

/**
 * find_smallest_int - function to find smallest unteger in array
 * @array: array of integers
 * @len: size of array
 * Return: the smallest integer in array
 */

int find_smallest_int(const int array[/* len */], size_t len)
{
	size_t i;
	int val;

	val = array[0];

	for (i = 0; i < len; i++)
	{
		if (val >= array[i])
		{
			val = array[i];
		}
	}
  return val;
}
