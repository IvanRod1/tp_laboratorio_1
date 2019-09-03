#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void menuOpciones(int a,int b)
{

        int opcion;
        int resultado;
        float resultadoDivision;
do
    {
        printf("\nEl numero 1 es: %d y el numero 2 es: %d\nQue quiere hacer con estos numeros?\n",a,b);
        printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Factorial de un numero\n6.Pedir otro numero\n7.Salir\nOpcion:");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                resultado = sumarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                system("pause");
                system("cls");
                break;
            case 2:
                resultado = restarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                system("pause");
                system("cls");
                break;
            case 3:
                resultado = multiplicarNumeros(a,b);
                printf("\nEl resultado es %d\n",resultado);
                system("pause");
                system("cls");
                break;
            case 4:
                resultadoDivision = dividirNumeros(a,b);
                printf("\nEl resultado es %.2f\n",resultadoDivision);
                system("pause");
                system("cls");
                break;
            case 5:
                a = pedirNumero();
                b = pedirNumero();
                system("pause");
                system("cls");

                break;
            case 6:


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
    if (numB != 0)
    {
        auxiliarResultado = numA/(float)numB;
        return auxiliarResultado;
    }
    else
    {
      printf("\nNo se puede dividir entre 0\n");
    }
    return 0;
}
int factorialNumero(int numero)
{
    int factorial;
    if(numero <= 1)
    {
        printf("No es posible sacar factorial de este numero");
        factorial = 0;
    }
    else
    {
        factorial = numero * factorialNumero(numero-1);
    }
    return factorial;
}

int pedirNumero()
{
    int numero;
    printf("Ingrese numero:");
    scanf("%d",&numero);
    return numero;
}
void mensajeInicio(void)
{
    printf("                             Calculadora C                   \n");
}
/* pedir un entero con puntero // int pedirNumero(char *mensaje)// int pedirAlgo("Ingrese peso");
                                    {
                                        int numero;
                                        printf(mensaje);
                                        scanf("%d",&numero);
                                        return numero;
                                    }
pasaje por referencia porPuntero(&numero);
void porPuntero (int *numero)
{
    *numero = 333;
}
int dividir(int dividendo,int divisor, int *respuesta)
{
    int sePudo = 1;
    if (divisor != 0)
    {
        *respuesta =dividendo/divisor
    }
    else
    {
    sePudo = 0;
    }
    return sePudo;
}
en el main:
int resultado;
if(dividir(2,3,&resultado)==1)
{
    printf("se)
}*/
