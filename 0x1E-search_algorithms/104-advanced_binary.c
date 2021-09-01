#include"search_algos.h"

/**
 * binary_search_re - Function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @left: The first index of the sub-array
 * @right: The last index of the sub-array
 * Return: return the index where value is located
 */

int binary_search_re(int *array, int left, int right, int value)
{
	int i;
	int mid;

	if (array == NULL)
		return (-1);

	if (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (binary_search_re(array, left, mid, value));
		return (binary_search_re(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - Function that searches for a value in a
 * sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the index of the first value in the array
 */

int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_re(array, left, right, value));
}
