#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

void push(stack_t **stack, unsigned int line_number, char *arg);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
int is_integer(char *str);
int process_file(char *filename);
int execute_line(char *line, unsigned int line_number, stack_t **stack);

#endif
void swap(stack_t **stack, unsigned int line_number);
