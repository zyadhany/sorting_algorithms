#include "sort.h"

/**
 * bubble_sort - sort array.
 * @array: given array.
 * @size: size of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp, keep = 1;
	size_t j;

	if (!array)
		return;

	while (keep)
	{
		keep = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				keep = 1;
				print_array(array, size);
			}
		}
	}

}
