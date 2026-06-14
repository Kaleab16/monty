#include "monty.h"

int is_integer(char *str)
{
int i = 0;

if (str == NULL)
return (0);

if (str[0] == '-')
i = 1;

for (; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0);
}
return (1);
}

void free_stack(stack_t *stack)
{
stack_t *temp;

while (stack != NULL)
{
temp = stack;
stack = stack->next;
free(temp);
}
}
