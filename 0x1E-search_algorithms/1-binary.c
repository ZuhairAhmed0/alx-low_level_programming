#include "search_algos.h"
/**
* binary_search - function that searches for a value in a sorted
*	arrayl of integers using the Binary search algorithm
*
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: first index where value is located
*       if value is not present i   n array or if array is NULL return -1
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (helper(array, 0, size - 1, value));
}
/**
* helper - array helper
* @array: array yo be search
* @first: first element
* @last: last element
* @value: value to search
*
* Return: index of value or -1
*/
int helper(int *array, size_t first, size_t last, int value)
{
	size_t i = first, mid;

	if (first > last)
		return (-1);

	printf("Searching in array: %d", array[i++]);
	while (i <= last)
		printf(", %d", array[i++]);
	printf("\n");
	mid = first + ((last - first) / 2);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (helper(array, first, mid - 1, value));
		else
			return (-1);
	}
	else
		return (helper(array, mid + 1, last, value));
}
