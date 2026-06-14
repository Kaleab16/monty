#include "monty.h"

int process_file(char *filename)
{
FILE *file;
char *line = NULL;
size_t len = 0;
ssize_t read;
unsigned int line_number = 0;
stack_t *stack = NULL;
int status = EXIT_SUCCESS;

file = fopen(filename, "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
return (EXIT_FAILURE);
}

while ((read = getline(&line, &len, file)) != -1)
{
line_number++;
status = execute_line(line, line_number, &stack);
if (status == EXIT_FAILURE)
{
free(line);
fclose(file);
free_stack(stack);
return (EXIT_FAILURE);
}
}

free(line);
fclose(file);
free_stack(stack);
return (status);
}
