#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void menuOpciones(int a,int b)
{

        int opcion;
        int resultado;

    do
    {
        printf("El numero 1 es: %d y el numero 2 es: %d\nQue quiere hacer con estos numeros?");
        printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Factorial\n6.Pedir otro numero\n7.Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                resultado = sumarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                break;
            case 2:
                resultado = restarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                break;
            case 3:
                resultado = multiplicarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                break;
            case 4:
                resultado = dividirNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                break;
            case 5:

                break;
            case 6:
                a = pedirNumero();
                b = pedirNumero();
                break;
            default:
            printf("\nValor ingresado no valido\n");
        }


    }while(opcion != 7);
}
int sumarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA + numB;
    return auxiliarResultado;
}

int restarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA - numB;
    return auxiliarResultado;
}

int multiplicarNumeros(int numA, int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA * numB;
    return auxiliarResultado;
}

float dividirNumeros(int numA,int numB)
{
    float auxiliarResultado;
    if(numB != 0)
    {
        auxiliarResultado = (float)numA/numB;
        return auxiliarResultado;
    }else
    {
      printf("No se puede divdir entre 0");
      return auxiliarResultado;
    }
}

int pedirNumero()
{
    int numero;
    printf("Ingrese numero:");
    scanf("%d",&numero);
    return numero;
}
void mensajeBienvenida(void)
{
    printf("                             Calculadora C                   \n");
}

