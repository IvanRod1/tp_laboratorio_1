#include "arrayEmpleados.h"
int iniciarEmpleados(eEmpleado listado[],int tam)
{
    int i;
    int retorno = -1;
    for(i=0;i<tam;i++)
    {
        if(tam > 0 && tam <= 1000)
        {
            listado[i].estado = 0;
            retorno = 0;
        }

    }
    return retorno;
}

int agregarEmpleado(eEmpleado listado[],int tam,int id,char nombre[],char apellido[],float salario,int sector)
{
    int retorno = -1;
    int indice;
    int i;

    for(i=0;i<tam;i++)
    {
        indice = buscarLibre(listado,tam);
        if(indice != -1)
        {
            getString("Ingrese nombre:",nombre);
            fflush(stdin);
            getString("Ingrese apellido:",apellido);
            fflush(stdin);
            salario = getFloat("Ingrese salario:");
            sector = getInt("Ingrese sector:");
            id = indice + 1;
            fflush(stdin);

            strcpy(listado[indice].nombre,nombre);
            strcpy(listado[indice].apellido,apellido);
            listado[indice].salario = salario;
            listado[indice].sector = sector;
            listado[indice].estado = -1;
            listado[indice].id = id;

            retorno = 0;
            break;

        }
    }
    return retorno;
}

int buscarLibre(eEmpleado listado[],int tam)
{
  int indice = -1;
  int i;

  for(i=0;i<tam;i++)
    {
        if(listado[i].estado==0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
int buscarEmpleadoId(eEmpleado listado[],int tam,int id)
{
    int retorno = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(id == listado[i].id && listado[i].estado == -1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}
int removerEmpleado(eEmpleado listado[],int tam,int id)
{
    int retorno = -1;
    int indice = buscarEmpleadoId(listado,tam,id);

    if(indice != -1)
    {
        listado[indice].estado = 0;
        retorno = 0;
    }

    return retorno;
}
int mostrarEmpleados(eEmpleado listado[],int tam)
{
    int retorno = -1;
    int i;
    printf("ID\tNOMBRE Y APELLIDO\t SALARIO\t\t SECTOR\n");
    for(i=0;i<tam;i++)
    {
        if(listado[i].estado != 0)
        {

            printf("%d",listado[i].id);
            printf("\t%s %s",listado[i].nombre,listado[i].apellido);
            printf("\t\t%.2f",listado[i].salario);
            printf("\t\t%d\n",listado[i].sector);
            retorno = 0;
        }
    }
    return retorno;
}
int ordenarEmpleados(eEmpleado listado[],int tam,int orden)
{
    int retorno = -1;
    int i;
    int j;
    char auxApellido[51];
    int auxSector;
    float totalSalariosEmpleados;
    int totalEmpleados;
    float promedioSalariosEmpleados;

    switch(orden)
    {
        case 1:
        for(i=0;i<tam-1;i++)
        {
            for(j=i+1;j<tam;j++)
                {
                    if(stricmp(listado[i].apellido,listado[j].apellido) > 0)
                    {
                        strcpy(auxApellido,listado[i].apellido);
                        strcpy(listado[i].apellido,listado[j].apellido);
                        strcpy(listado[j].apellido,auxApellido);

                        auxSector = listado[i].sector;
                        listado[i].sector = listado[j].sector;
                        listado[j].sector = auxSector;
                        retorno = 0;
                    }
                }
        }
        mostrarEmpleados(listado,tam);
            break;

        case 2:
                totalSalariosEmpleados = totalSalarios(listado,tam);
                totalEmpleados = cantidadEmpleados(listado,tam);
                promedioSalariosEmpleados = promedioSalarios(totalSalariosEmpleados,totalEmpleados);
                mostrarEmpleadosConSalarioSuperiorPromedio(listado,tam,promedioSalariosEmpleados);
                retorno = 0;
                break;


        }

        return retorno;
}
int modificarEmpleado(eEmpleado listado[],int tam)
{
    int indice;
    int peticionId;
    int retorno = -1;
    int opcionUsuario;
    char auxiliar[20];
    int auxiliar2;
    float auxiliar3;
    mostrarEmpleados(listado,tam);
    peticionId = getInt("\nIngrese ID a ser modificado:");
    indice = buscarEmpleadoId(listado,tam,peticionId);
    fflush(stdin);
        if(indice != -1)
        {
            printf("\nQue quiere cambiar?\n");
            printf("1.Nombre\n2.Apellido\n3.Salario\n4.Sector\n");
            opcionUsuario = getInt("Elija:");
            fflush(stdin);

            switch(opcionUsuario)
            {
                case 1:
                    getString("Ingrese nombre:",auxiliar);
                    strcpy(listado[indice].nombre,auxiliar);
                    fflush(stdin);
                    break;
                case 2:
                    getString("Ingrese apellido:",auxiliar);
                    strcpy(listado[indice].apellido,auxiliar);
                    fflush(stdin);
                    break;
                case 3:
                    auxiliar3 = getFloat("Ingrese salario:");
                    listado[indice].salario = auxiliar3;
                    break;
                case 4:
                    auxiliar2 = getInt("Ingrese sector:");
                    listado[indice].sector = auxiliar2;
                    break;
            }

            retorno = 0;
        }
        return retorno;

}
void funcionEstetica(void)
{
    system("pause");
    system("cls");
}
float totalSalarios(eEmpleado listado[],int tam)
{
    float retorno = -1;
    int i;
    float totalAcumulador = 0;

    for(i=0;i<tam;i++)
    {
        if(listado[i].estado == -1)
        {
            totalAcumulador += listado[i].salario;
            retorno = totalAcumulador;
        }

    }
    return retorno;
}
int cantidadEmpleados(eEmpleado listado[],int tam)
{
    int i;
    int contadorEmpleados = 0;

    for(i=0;i<tam;i++)
    {
        if(listado[i].estado == -1)
        {

            contadorEmpleados++;

        }
    }
    return contadorEmpleados;
}
float promedioSalarios(float salario,int cantidad)
{
    float retorno;
    retorno = salario / cantidad;
    return retorno;
}
int mostrarEmpleadosConSalarioSuperiorPromedio(eEmpleado listado[],int tam,float promedio)
{
    int retorno = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(listado[i].salario > promedio && listado[i].estado == -1)
        {
            printf("%d\t%s %s",listado[i].id,listado[i].nombre,listado[i].apellido);
            printf("\t%.2f\n",listado[i].salario);

            retorno = 0;
        }
    }
    return retorno;
}








