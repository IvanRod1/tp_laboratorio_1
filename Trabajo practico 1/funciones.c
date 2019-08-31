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
        printf("\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Pedir otro numero\n6.Factorial de un numero\n7.Salir\n");
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

