#include "lists.h"
/**
* listint_len - count
* @h: head
* Return: nodes
*/
size_t listint_len(const listint_t *h)
{
size_t a = 0;

while (h)
{
a++;
h = h->next;
}
return (a);
}
