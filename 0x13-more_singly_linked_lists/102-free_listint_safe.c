#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *node = *h;
size_t count = 0;

while (node)
{
listint_t *temp = node->next;
count++;
free(node);
node = temp;
if (node == *h)
{
break;
}
}

*h = NULL;
return (count);
}
