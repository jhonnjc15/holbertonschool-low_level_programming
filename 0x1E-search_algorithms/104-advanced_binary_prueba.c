#include"search_algos.h"

/**
 * advanced_binary_prueba - Function that searches for a value in a
 * sorted array of integers using a recursive Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */

int advanced_binary_prueba(int *array, size_t size, int value)
{
	int i;
	int mid;
	int left = 0;
	int right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	return (-1);
}
