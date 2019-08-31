#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    mensajeBienvenida();
    int numeroA = pedirNumero();
    int numeroB = pedirNumero();
    menuOpciones(numeroA,numeroB);
    return 0;
}
