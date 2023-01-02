#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
current = current->next;

if (current > head)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
}

return (count);
}
