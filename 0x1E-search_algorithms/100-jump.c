#include"search_algos.h"

/**
 * jump_search- Function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t low = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i+=jump)
	{
		if (array[i] < value)
			low = i;
		if (array[i] >= value )
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, i);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i + jump > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",\
					low, i + jump);
			break;
		}
	}
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
