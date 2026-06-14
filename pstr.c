#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *current;
int value;
(void)line_number;

current = *stack;

while (current != NULL)
{
value = current->n;

if (value <= 0 || value > 127)
break;

printf("%c", value);
current = current->next;
}

printf("\n");
}
