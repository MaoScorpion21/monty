#include "monty.h"

void toquenizar(char *buffer)
{
  tools.comando = strtok(buffer, "\t\n\r ");
  tools.numero = strtok(NULL, "\t\n\r ");
}
