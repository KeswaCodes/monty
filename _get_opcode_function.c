#include "monty.h"
void (*_get_opcode_function(char *buffer, value_t *data))(stack_t **, unsigned int)
{
int i;
char *opcode, *opcode_value;
instruction_t operations[] = {

{"push", _push},
{"pall", _pall},
{NULL, NULL}

};
opcode = strtok(buffer, " \t\n");
opcode_value = strtok(NULL, "\t\n");
i = 0;
while (opcode != NULL)
{
for (i = 0; operations[i].opcode != NULL; i++)
{
if (strcmp(operations[i].opcode, opcode) == 0)
break;
}
}
data->opcode_value = opcode_value;
return (operations[i].f);
}
