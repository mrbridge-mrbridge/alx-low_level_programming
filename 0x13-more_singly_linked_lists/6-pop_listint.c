#include "lists.h"
/**
* pop_listint - deletes the first node
* @head: head
* Return: data
*/
int pop_listint(listint_t **head)
{
int a = 0;
listint_t *b;

if (*head)
{
a = (*head)->n;
b = *head;
*head = (*head)->next;
free(b);
}
return (a);
}
