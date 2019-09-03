/** \brief se encarga de sumar dos enteros
 *
 * \param int representa el primer operando de la suma
 * \param  int representa el segundo operando de la suma
 * \return int devuelve el resultado de la suma entre dos enteros
 *
 */
int sumarNumeros (int,int);
/** \brief se encarga de restar dos enteros
 *
 * \param int representa el primer operando de la resta
 * \param int representa el segundo operando de la resta
 * \return int devuelve el resultado de la resta entre dos enteros
 *
 */
int restarNumeros(int,int);
/** \brief se encarga de dividir dos enteros
 *
 * \param int es el dividendo de la division
 * \param int es el divisor de la division
 * \return float devuelve el resultado de la division entre dos enteros
 *
 */
float dividirNumeros(int,int);
/** \brief se encarga de multiplicar dos numeros
 *
 * \param int es el primer operando de la multiplicacion
 * \param int es el segundo operando de la multiplicacion
 * \return int devuelve el resultado de la multiplicacion entre dos enteros
 *
 */
int multiplicarNumeros(int,int);
/** \brief es el menu con todas las opciones pedidas
 *
 * \return void
 *
 */
void menuOpciones();
/** \brief pide un numero
 *
 * \param char* recibe un mensaje por puntero
 * \return int devuelve un numero
 *
 */
int pedirNumero(char*);
/** \brief mensaje de bienvenida
 *
 * \param void
 * \return void
 *
 */
void mensajeInicio(void);
/** \brief calcula el factorial de un numero
 *
 * \param int es el numero que se va a usar para calcular el factorial
 * \return unsigned int devuelve el factorial de un numero
 *
 */
unsigned int factorial(int);
