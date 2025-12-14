#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using insertion sort
 * @list: double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *insert, *tmp;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next;
while (current)
{
insert = current;
current = current->next;

while (insert->prev && insert->n < insert->prev->n)
{
tmp = insert->prev;

tmp->next = insert->next;
if (insert->next)
insert->next->prev = tmp;
insert->prev = tmp->prev;
insert->next = tmp;

if (tmp->prev)
tmp->prev->next = insert;
else
*list = insert;
tmp->prev = insert;
print_list(*list);
}
}
}
