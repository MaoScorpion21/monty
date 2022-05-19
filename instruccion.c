#include "monty.h"

void instruccion(int line_num, char *opc_cod, stack_t **h)
{
	instruction_t command[] = {
		{ "pall", pall },
		{ "push", push },
		{ NULL, NULL }
	};
	int i = 0;

	for (; command[i].opcode; i++)
	{
		if (strcmp(command[i].opcode, opc_cod) == 0)
		{
			command[i].f(h, line_num);
			break;
		}
	}

	if (command[i].opcode == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_num, opc_cod);
		exit(EXIT_FAILURE);
	}
}
