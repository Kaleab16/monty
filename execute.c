#include "monty.h"

int execute_line(char *line, unsigned int line_number, stack_t **stack)
{
char *opcode;
char *arg;

opcode = strtok(line, " \t\n");
if (opcode == NULL || opcode[0] == '#')
return (EXIT_SUCCESS);

if (strcmp(opcode, "push") == 0)
{
arg = strtok(NULL, " \t\n");
if (arg == NULL || !is_integer(arg))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
return (EXIT_FAILURE);
}
push(stack, line_number, arg);
}
else if (strcmp(opcode, "pall") == 0)
{
pall(stack, line_number);
}
else
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
return (EXIT_FAILURE);
}

return (EXIT_SUCCESS);
}
