#include"search_algos.h"

/**
 * binary_search_- Function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @left: The first index of the sub-array
 * @right: The last index of the sub-array
 * Return: return the index where value is located
 */

int binary_search_(int *array, int value, int left, int right)
{
	int i;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search -Function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{

	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i < size)
		right = i;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_(array, value, i / 2, right));
}
