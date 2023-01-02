#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
{
return (0);
}

temp = *head;
*head = (*head)->next;
n = temp->n;
free(temp);
return (n);
}
