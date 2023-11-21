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
	size_t i, j;

	if (b <= a)
		return;

	for (i = j = a; j < b; j++)
		if (array[j] < array[b])
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[b], &array[i]);

	if (i)
		quickSort(array, size, a, i - 1);
	quickSort(array, size, i + 1, b);
}

/**
 * quick_sort - sort array.
 * @array: given array.
 * @size: size of array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quickSort(array, size, 0, size - 1);
}
