#include "sort.h"

/**
 * swap_ints - Swap two integers in an array
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap_ints(int *a, int *b)
{
int tmp;

if (a != b)
{
tmp = *a;
*a = *b;
*b = tmp;
}
}

/**
 * lomuto_partition - Partition the array using Lomuto scheme
 * @array: The array to partition
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array (for printing)
 *
 * Return: Index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low, j;

for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}
if (i != high)
{
swap_ints(&array[i], &array[high]);
print_array(array, size);
}
return (i);
}

/**
 * quick_sort_recursive - Recursively sort the array
 * @array: Array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array (for printing)
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
int pivot;

if (low < high)
{
pivot = lomuto_partition(array, low, high, size);
quick_sort_recursive(array, low, pivot - 1, size);
quick_sort_recursive(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - Sort an array of integers in ascending order
 *             using the Quick sort algorithm (Lomuto)
 * @array: Array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_recursive(array, 0, (int)size - 1, size);
}
