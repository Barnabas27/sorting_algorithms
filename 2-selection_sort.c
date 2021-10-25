#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order using
* selection sort
* tip - assigning a value to a temp value
* @array: the array to be sorted
* @size: size of the array to be sorted
*/

void tip(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			        print_array(array, size);
			}

			tip(&array[min_idx], &array[i]);

		}
	}

}
