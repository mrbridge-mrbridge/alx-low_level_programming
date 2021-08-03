#include "lists.h"
/**
* reverse_listint - reverses a listint
* @head: head
* Return: Returns
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *a;
listint_t *b;

a = 0;
while (*head != NULL)
{
b = (*head)->next;
(*head)->next = a;
a = (*head);
(*head) = b;
}
(*head) = a;
return (*head);
}
