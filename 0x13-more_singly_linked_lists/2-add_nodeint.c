#include "lists.h"
/**
* add_nodeint - adds a node
* @head: head
* @n: data
* Return: Return
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a=malloc(sizeof(listint_t));

if (!a)
return (NULL);
a->n = n;
a->next = *head;
*head = a;
return (*head);
}
