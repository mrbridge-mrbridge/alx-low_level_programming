#include "lists.h"
/**
* sum_listint - returns the sum of all the data
* @head: head
* Return: return sum
*/
int sum_listint(listint_t *head)
{
int a = 0;

while (head != NULL)
{
a += head->n;
head = head->next;
}
return (a);
}
