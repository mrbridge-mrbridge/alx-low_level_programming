#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node
* @head: head
* @index: index
* Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;

while (head)
{
if (a == index)
return (head);
head = head->next;
a++;
}
return (NULL);
}
