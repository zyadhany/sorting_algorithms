#include "sort.h"

/**
 * merge_sort - sort array.
 * @array: given array.
 * @size: size of array
 *
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	int *X;
	size_t l, r, at;

	if (!array || size <= 1)
		return;

	merge_sort(array, size / 2);
	merge_sort(array + size / 2, (size + 1) / 2);

	l = r = at = 0;
	X = malloc(sizeof(int) * size);

	while (l < size / 2 && r < (size + 1) / 2)
	{
		if (array[l] <= array[r + size / 2])
			X[at++] = array[l++];
		else
			X[at++] = array[r++ + size / 2];
	}
	
	while (l < size / 2)
	{
		X[at++] = array[l++];
	}

	while (r < (size + 1) / 2)
	{
		X[at++] = array[r++ + size / 2];
	}

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, size / 2);
	printf("[right]: ");
	print_array(array + size / 2, (size + 1) / 2);
	printf("[Done]: ");
	print_array(X, size);


	for (at = 0; at < size; at++)
		array[at] = X[at];
	free(X);
}
