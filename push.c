#include "monty.h"

extern int mode;

/**
 * push - pushes an element to the stack (or queue based on mode)
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 * @arg: argument to push
 */
void push(stack_t **stack, unsigned int line_number, char *arg)
{
stack_t *new_node;
stack_t *current;
int n = atoi(arg);
(void)line_number;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (mode == 0)
{
/* Stack mode (LIFO) - push to top */
new_node->next = *stack;
if (*stack != NULL)
(*stack)->prev = new_node;
*stack = new_node;
}
else
{
/* Queue mode (FIFO) - push to bottom */
if (*stack == NULL)
{
*stack = new_node;
return;
}
current = *stack;
while (current->next != NULL)
current = current->next;
current->next = new_node;
new_node->prev = current;
}
}
