#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void menuOpciones()
{
    int numeroA;
    int numeroB;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int opcion;
    int factorialA;
    int factorialB;


    do
{
        mensajeInicio();
    opcion = pedirNumero("Ingrese opcion elegida:");
    switch(opcion)
    {
        case 1:
        numeroA = pedirNumero("Ingrese primer operando:");
        system("pause");
        system("cls");
        break;

        case 2:
        numeroB = pedirNumero("Ingrese segundo operando:");
        system("pause");
        system("cls");
        break;

        case 3:
        resultadoSuma = sumarNumeros(numeroA,numeroB);
        resultadoResta = restarNumeros(numeroA,numeroB);
        resultadoMultiplicacion = multiplicarNumeros(numeroA,numeroB);
        resultadoDivision = dividirNumeros(numeroA,numeroB);
        factorialA = factorial(numeroA);
        factorialB = factorial(numeroB);
        printf("Se realizaron las operaciones correctamente\n");
        system("pause");
        system("cls");
        break;

        case 4:
        printf("El resultado de %d+%d es:%d\n",numeroA,numeroB,resultadoSuma);
        printf("El resultado de %d-%d es:%d\n",numeroA,numeroB,resultadoResta);
        printf("El resultado de %d*%d es:%d\n",numeroA,numeroB,resultadoMultiplicacion);
        if(numeroB != 0)
        {
            printf("El resultado de %d/%d es:%f\n",numeroA,numeroB,resultadoDivision);
        }
        else
        {
            printf("No se puede dividir %d entre 0\n",numeroA);
        }
        printf("El factorial de %d! es %d y el factorial de %d! es %d\n",numeroA,factorialA,numeroB,factorialB);


        system("pause");
        system("cls");
        break;
    }

}while(opcion != 5);
}
int pedirNumero(char* mensaje)
{
    int numero;
    printf(mensaje);
    scanf("%d",&numero);
    return numero;
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

    auxiliarResultado = numA/(float)numB;
    return auxiliarResultado;

}
unsigned int factorial(int numero)
{
    unsigned int resultado = 1;
    int i;

   for(i=numero;i>=1;i--)
   {
    resultado =  resultado * i;
   }
    return resultado;
}

void mensajeInicio(void)
{
    printf("\t\tCalculadora C\t\t\n1.Elegir primer operando\n2.Elegir segundo operando\n3.Calcular las operaciones\n4.Mostrar las operaciones\n5.Salir\n");
}

