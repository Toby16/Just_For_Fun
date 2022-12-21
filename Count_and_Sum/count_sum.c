#include <stddef.h>

void count_positives_sum_negatives(
		int *values, size_t count, int *positivesCount, int *negativesSum)
{
	int positive_count = 0;
	int negative_sum = 0;
	size_t i;
	/**
	 * Please store the positives count in the memory, pointed to
	 * by the positivesCount parameter.*/

	for (i = 0; i < count; i++)
	{
		if (values[i] > 0)
		{
			positive_count += 1;
		}
		else if (values[i] < 0)
		{
			negative_sum += values[i];
		}
		else
		{
			positive_count += 0;
			negative_sum += 0;
		}
	}
	/**
	 * Please store the negatives sum in the memory, pointed to
	 * by the negativesSum parameter.*/
}  
