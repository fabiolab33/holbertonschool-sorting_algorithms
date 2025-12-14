#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: first integer
 * @b: second integer
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
 * lomuto_partition - partitions the array using Lomuto scheme
 * @array: array to partition
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 *
 * Return: index of the pivot
 */
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
int pivot = array[high];
size_t i = low, j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
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
 * quick_sort_recursive - recursive Quick Sort implementation
 * @array: array to sort
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 */
void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
size_t pivot;

if (low < high)
{
pivot = lomuto_partition(array, low, high, size);
if (pivot > 0)
quick_sort_recursive(array, low, pivot - 1, size);
quick_sort_recursive(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto partition)
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}
