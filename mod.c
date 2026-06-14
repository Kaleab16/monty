#include "monty.h"

/**
 * mod - computes the remainder of division of second top by top element
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void mod(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *second;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

first = *stack;
second = first->next;

if (first->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
exit(EXIT_FAILURE);
}

second->n = second->n % first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
