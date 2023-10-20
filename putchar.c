#include "monty.h"

/**
 * _putchar - this is the prints the char at the top
 * @head: the stack head
 * @counter: the line number
 * Return: the void
*/
void _putchar(stack_t **head, unsigned int counter)
{
	stack_t *l;

	l = *head;
	if (!l)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(opc.file);
		free(opc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (l->n > 127 || l->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(opc.file);
		free(opc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", l->n);
}
/**
 * _pall - this prints the stack
 * @head: this is the stack head
 * @counter: this is the no used
 * Return: this is the void
*/
void _pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
/**
 * _pint - this  prints the top
 * @head: the stack head
 * @counter: the line_number
 * Return: the void
*/
void _pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(opc.file);
		free(opc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
/**
 * _pstr - this is the prints the string starting
 * @head: this is the stack head
 * @counter: this is the line_number
 * Return: the void
*/
void _pstr(stack_t **head, unsigned int counter)
{
	stack_t *j;
	(void)counter;

	j = *head;
	while (j)
	{
		if (j->n > 127 || j->n <= 0)
		{
			break;
		}
		printf("%c", j->n);
		j = j->next;
	}
	printf("\n");
}
/**
* free_stack -this is what frees a doubly linked list
* @head: the void
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
