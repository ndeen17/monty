#include "monty.h"
/**
 * _queue - this prints the top
 * @head: thi is the stack head
 * @counter: this is the line_number
 * Return: there is no return
*/
void _queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	opc.sq_flag = 1;
}

/**
 * addqueue - this helps add node to the tail stack
 * @n: this creates new_value
 * @head: this is the head of the stack
 * Return: there is no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
