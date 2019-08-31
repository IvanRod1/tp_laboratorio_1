#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void menuOpciones(int a, int b)
{
    int opcion;
    int resultado;
    {
        printf("El numero 1 es: %d y el numero 2 es: %d\nQue quiere hacer con estos numeros?",a,b);
        printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Pedir otro numero\n6.Factorial de un numero\n7.Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                resultado = sumarNumeros(a,b);
                printf("El resultado es %d",resultado);
                break;
            case 2:
                resultado = restarNumeros(a,b);
                printf("El resultado es %d",resultado);
                break;
            case 3:
                resultado = multiplicarNumeros(a,b);
                printf("El resultado es %d",resultado);


                break;
            case 4:
                resultado = dividirNumeros(a,b);
                printf("El resultado es %d",resultado);


                break;
            case 5:
                a = pedirNumero();
                b = pedirNumero();

                break;
            case 6:
                a = pedirNumero();
                break;
            default:
                printf("Valor ingresado no valido");
        }


    }while(opcion!=7);
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
    auxiliarResultado = (float)numA/(float)numB;
    return auxiliarResultado;
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

