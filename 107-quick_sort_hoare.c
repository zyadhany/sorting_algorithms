#include "sort.h"

/**
 * swap - sort array.
 * @array: given array.
 * @size: size of array
 * @a: first index
 * @b: second index
 *
 * Return: nothing
 */
void swap(int *array, size_t size, int *a, int *b)
{
	int tmp = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = tmp;
		print_array(array, size);
	}
}

/**
 * quickSort - sort array.
 * @array: given array.
 * @size: size of array
 * @a: first index
 * @b: second index
 *
 * Return: nothing
 */
void quickSort(int *array, size_t size, size_t a, size_t b)
{
	size_t i = a, j = b;

	if (b <= a)
		return;

	while (i < j)
	{
		if (array[i] < array[b])
			i++;
		else if (array[j] >= array[b])
			j--;
		else
			swap(array, size, &array[i], &array[j]);
	}
	swap(array, size, &array[i], &array[b]);

	if (i)
		quickSort(array, size, a, i - 1);
	quickSort(array, size, i + 1, b);
}

/**
 * quick_sort_hoare - sort array.
 * @array: given array.
 * @size: size of array
 *
 * Return: nothing
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quickSort(array, size, 0, size - 1);
}
