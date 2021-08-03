#include "lists.h"
/**
* add_nodeint_end - adds a node
* @head: head
* @n: data
* Return: adress
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *a= malloc(sizeof(listint_t));
listint_t *b = *head;

if (!a)
return (NULL);
a->n = n;
a->next = NULL;
if (*head == NULL)
{
*head = a;
return (*head);
}
while (b->next)
b = (b)->next;
b->next = a;
return (a);
}
