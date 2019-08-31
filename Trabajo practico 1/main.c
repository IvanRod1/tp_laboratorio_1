#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    mensajeInicio();
    int numeroA = pedirNumero();
    int numeroB = pedirNumero();
    menuOpciones(numeroA,numeroB);
    return 0;
}
