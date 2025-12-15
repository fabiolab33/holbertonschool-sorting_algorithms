# Sorting Algorithms & Big O

## Description

This project focuses on implementing and understanding different **sorting algorithms** in C, as well as analyzing their **time complexity** using **Big O notation**.

The goal is to understand how each algorithm works internally, when to use it, and how its performance varies depending on the input.

---

## Implemented Algorithms


File: `0-bubble_sort.c`

* Function: `void bubble_sort(int *array, size_t size);`

* Prints the array after every swap

* Time Complexity:

 * Best: `O(n)`

 * Average: `O(n^2)`

 * Worst: `O(n^2)`

---

File: `1-insertion_sort_list.c`

* Function: `void insertion_sort_list(listint_t **list);`

* Nodes are swapped (not values)

* Prints the list after every swap

* Time Complexity:

 * Best: `O(n)`

 * Average: `O(n^2)`

 * Worst: `O(n^2)`

---

File: `2-selection_sort.c`

* Function: `void selection_sort(int *array, size_t size);`

* Prints the array after every swap

* Time Complexity:

 * Best: `O(n^2)`

 * Average: `O(n^2)`

 * Worst: `O(n^2)`

---

File: `3-quick_sort.c`

* Function: `void quick_sort(int *array, size_t size);`

* Uses **Lomuto partition scheme**

* Pivot is always the last element

* Prints the array after every swap

* Time Complexity:

 * Best: `O(nlog(n))`

 * Average: `O(nlog(n))`

 * Worst: `O(n^2)`