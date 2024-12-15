#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble Sort algorithm.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, x;
	int temp;
	int swapped;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;

		for (x = 0; x < size - i - 1; x++)
		{
			if (array[x] > array[x + 1])
			{

				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;


				print_array(array, size);

				swapped = 1;
			}
		}


		if (!swapped)
			break;
	}
}

