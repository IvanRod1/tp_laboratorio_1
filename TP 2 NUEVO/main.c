#include "arrayEmpleados.h"
int main()
{
    eEmpleado arrayEmpleados[EMPLEADOS];
    int inicializado;
    inicializado = iniciarEmpleados(arrayEmpleados,EMPLEADOS);

    int opcion;
    int auxiliarOpcion;
    int id = 0;
    char nombre[51];
    char apellido[51];
    float salario = 0;
    int sector = 0;
    int auxiliarConfirmacion = -1;
    int auxiliarEntero;





    do
    {
        printf("1.ALTA\n2.MODIFICAR\n3.BAJA\n4.INFORMAR\n5.SALIR\n");
        opcion = getInt("Ingrese su eleccion:");
        fflush(stdin);
        if(inicializado != -1)
        {
            switch(opcion)
            {
                case 1:

                auxiliarOpcion = agregarEmpleado(arrayEmpleados,EMPLEADOS,id,nombre,apellido,salario,sector);
                auxiliarConfirmacion = 0;


                switch(auxiliarOpcion)
                {
                    case -1:
                        printf("No hay espacio\n");
                        funcionEstetica();
                        break;

                    case 0:
                        printf("Asentado con exito\n");
                        funcionEstetica();
                        break;
                }
                break;

                case 2:
                if(auxiliarConfirmacion != -1)
                {
                    auxiliarOpcion = modificarEmpleado(arrayEmpleados,EMPLEADOS);




                    switch(auxiliarOpcion)
                    {
                        case -1:
                        printf("No se encontro id\n");
                        funcionEstetica();
                        break;

                        case 0:
                        printf("Modificado con exito\n");
                        funcionEstetica();
                        break;

                    }
                    break;
                }
                else
                {
                    printf("No hay nada\n");
                    funcionEstetica();
                }
                break;

                case 3:

                if(auxiliarConfirmacion != -1)
                {
                    mostrarEmpleados(arrayEmpleados,EMPLEADOS);
                    auxiliarEntero = getInt("Ingrese id a ser retirado:");
                    auxiliarOpcion = removerEmpleado(arrayEmpleados,EMPLEADOS,auxiliarEntero);

                    switch(auxiliarOpcion)
                    {
                        case -1:
                        printf("No se encontro id\n");
                        funcionEstetica();
                        break;

                        case 0:
                        printf("Dado de baja con exito\n");
                        funcionEstetica();
                        break;
                    }

                }
                else
                {
                    printf("No hay nada\n");
                    funcionEstetica();
                }
                break;

                case 4:
                if(auxiliarConfirmacion != -1)
                {
                    printf("1.LISTAR ALFABETICAMENTE POR APELLIDO Y SECTOR\n2.PROMEDIO TOTAL DE SUELDOS DE EMPLEADOS\n");
                    auxiliarEntero = getInt("Ingrese opcion:");
                    ordenarEmpleados(arrayEmpleados,EMPLEADOS,auxiliarEntero);
                    break;


                }
                else
                {
                    printf("No hay nada\n");
                    funcionEstetica();
                }
                break;


            }

        }


        else
        {
            printf("No se puede ver lo que no hay o excedió lo permitido\n");
        }


    }while(opcion != 5);

    return 0;
}


