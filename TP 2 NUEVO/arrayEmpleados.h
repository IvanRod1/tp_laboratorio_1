#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gets.h"
#define EMPLEADOS 1000
typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int estado;

}eEmpleado;
/** \brief Inicializa el array de empleados en 0
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return int retorna 0 si se inicializo correctamente y si no -1
 *
 */
int iniciarEmpleados(eEmpleado listado[],int tam);
/** \brief Asenta un empleado en el array
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \param id int id del empleado
 * \param nombre[] char nombre del empleado
 * \param apellido[] char apellido del empleado
 * \param salario float salario del empleado
 * \param sector int sector donde trabaja el empleado
 * \return int si se pudo asentar bien retorna 0 y si no retorna -1
 *
 */
int agregarEmpleado(eEmpleado listado[],int tam,int id,char nombre[],char apellido[],float salario,int sector);
/** \brief busca el primer indice con estado en 0
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return int si encontro el indice con estado 0 retorna el indice, y si no retorna -1
 *
 */
int buscarLibre(eEmpleado listado[],int tam);
/** \brief busca a un empleado por su id
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \param id int id del empleado
 * \return int si encontro la id retorna el indice y si no lo encontro retorna -1
 *
 */
int buscarEmpleadoId(eEmpleado listado[],int tam,int id);
/** \brief hace una baja logica de un empleado por su id cambiandole su estado
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \param id int id del empleado
 * \return int si se hizo correctamente la baja retorna 0 y si no retorna -1
 *
 */
int removerEmpleado(eEmpleado listado[],int tam,int id);
/** \brief muestra todos los empleados con estado -1 en el array
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return int si pudo mostrar correctamente el array devuelve 0 y si no -1
 *
 */
int mostrarEmpleados(eEmpleado listado[],int tam);
/** \brief cumple dos funciones, ordena el array por orden alfabetico y muestra a los empleados con mayor sueldo que el promedio
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \param orden int es la eleccion que hace el usuario, si quiere ordenarlos por orden alfabetico ingresa 1 y si quiere mostrar los empleados con mayor sueldo promedio ingresa 2
 * \return int si se pudo hacer la accion correctamente retorna 0 y si no -1
 *
 */
int ordenarEmpleados(eEmpleado listado[],int tam,int orden);
/** \brief modifica un elemento en base a la eleccion del usuario
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return int si se pudo modificar retorna 0 y si no retorna -1
 *
 */
int modificarEmpleado(eEmpleado listado[],int tam);
/** \brief contiene las funciones system("pause") y system ("cls") para limpiar la ventana de comandos para que el usuario no se confunda con tanto texto
 *
 * \param void
 * \return void
 *
 */
void funcionEstetica(void);
/** \brief acumula los salarios de los empleados con estado en -1
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return float devuelve la suma de los salarios
 *
 */
float totalSalarios(eEmpleado listado[],int tam);
/** \brief cuenta los empleados con estado en -1 con un contador
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \return int
 *
 */
int cantidadEmpleados(eEmpleado listado[],int tam);
/** \brief hace el promedio de salarios
 *
 * \param salario float el total de los salarios de los empleados asentados
 * \param cantidad int la cantidad de empleados asentados
 * \return float retorna el promedio
 *
 */
float promedioSalarios(float salario,int cantidad);
/** \brief muestra los empleados con mayor salarios que el promedio
 *
 * \param listado[] eEmpleado listado de empleados
 * \param tam int tamaño del array
 * \param promedio float promedio de salarios
 * \return int si se pudo hacer correctamente retorna 0 y si no retorna -1
 *
 */
int mostrarEmpleadosConSalarioSuperiorPromedio(eEmpleado listado[],int tam,float promedio);





