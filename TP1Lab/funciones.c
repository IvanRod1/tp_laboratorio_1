#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief contiene toda la funcion necesaria para correr la calculadora
 *
 * \return void
 *
 */
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
        printf("El factorial de %d! es: %d y el factorial de %d! es: %d\n",numeroA,factorialA,numeroB,factorialB);


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
/** \brief se encarga de sumar dos enteros
 *
 * \param int numA representa el primer operando de la suma
 * \param  int  numB representa el segundo operando de la suma
 * \return int auxiliarResultado devuelve el resultado de la suma entre dos enteros
 *
 */
int sumarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA + numB;
    return auxiliarResultado;
}
/** \brief se encarga de restar dos enteros
 *
 * \param int numA representa el primer operando de la resta
 * \param int numBrepresenta el segundo operando de la resta
 * \return int auxiliarResultado devuelve el resultado de la resta entre dos enteros
 *
 */
int restarNumeros(int numA,int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA - numB;
    return auxiliarResultado;
}
/** \brief se encarga de multiplicar dos numeros
 *
 * \param int numA es el primer operando de la multiplicacion
 * \param int numB es el segundo operando de la multiplicacion
 * \return int auxiliarResultado devuelve el resultado de la multiplicacion entre dos enteros
 *
 */
int multiplicarNumeros(int numA, int numB)
{
    int auxiliarResultado;
    auxiliarResultado = numA * numB;
    return auxiliarResultado;
}
/** \brief se encarga de dividir dos enteros
 *
 * \param int numA es el dividendo de la division
 * \param int numB es el divisor de la division
 * \return float auxiliarResultado devuelve el resultado de la division entre dos enteros
 *
 */
float dividirNumeros(int numA,int numB)
{
    float auxiliarResultado;

    auxiliarResultado = numA/(float)numB;
    return auxiliarResultado;

}
/** \brief se encarga de buscar el factorial de un numero con iteraciones
 *
 * \param numero int es el entero a ser factoreado
 * \return unsigned int devuelve el resultado del factoreo
 *
 */
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

/** \brief muestra las opciones
 *
 * \param void
 * \return void
 *
 */
void mensajeInicio(void)
{
    printf("\t\tCalculadora C\t\t\n1.Elegir primer operando\n2.Elegir segundo operando\n3.Calcular las operaciones\n4.Mostrar las operaciones\n5.Salir\n");
}

