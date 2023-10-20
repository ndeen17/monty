#include "monty.h"
/**
 * _swap - this can adds the top two elements of the stack.
 * @head: this is the head of the stack
 * @counter: this line_number
 * Return: nothing returned
*/
void _swap(stack_t **head, unsigned int counter)
{
	stack_t *k;
	int len = 0, aux;

	k = *head;
	while (k)
	{
		k = k->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(opc.file);
		free(opc.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	aux = k->n;
	k->n = k->next->n;
	k->next->n = aux;
}
