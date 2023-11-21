#include "sort.h"

/**
 * selection_sort - sort array.
 * @array: given array.
 * @size: size of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int mn;
	size_t i, j, at;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		mn = array[i];
		at = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < mn)
			{
				mn = array[j];
				at = j;
			}
		}
		if (i != at){
			array[at] = array[i];
			array[i] = mn;			
			print_array(array, size);
		}
	}
}
