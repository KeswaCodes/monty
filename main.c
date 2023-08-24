#include "monty.h"
/**
 *main- main execution point
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0
 */
value_t data;

int main(int argc, char *argv[])
{
FILE *file = NULL;
char buffer[1024];
int line_number = 0;
void (*f)(stack_t **stack, unsigned int line_number);
stack_t *stack = NULL;
if (argc > 2)
exit(EXIT_FAILURE);

if (!argv[1])
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while(fgets(buffer, 1024, file) != NULL)
{
line_number++;
f = _get_opcode_function(buffer, &data);

f(&stack, line_number);
}

return (0);  
}
