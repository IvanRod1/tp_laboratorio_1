#include "gets.h"
int getInt(char mensaje[])
{
    int aux;
    printf(mensaje);
    scanf("%d",&aux);
    return aux;
}
char getChar(char mensaje[])
{
    char aux;
    printf(mensaje);
    scanf("%c",&aux);
    return aux;
}
void getString(char mensaje[],char palabra[])
{
    printf(mensaje);
    scanf("%[^\n]",palabra);
}
float getFloat(char mensaje[])
{
    float aux;
    printf(mensaje);
    scanf("%f",&aux);
    return aux;
}
