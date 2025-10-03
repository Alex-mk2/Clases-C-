//Codigo de c++
//Particularmente debo aprender todo respecto a c++
//En teoria debo empezar familiarizandome con el lenguaje, su sintaxis
//Luego de eso debo repasar ciertos ejercicios para ponerlos a prueba aqui


//Listas enlazadas:--------> objeto "X"-------> apuntar a un objeto "Y"
//                 --------> ingresar un objeto "Z"
//                 --------> eliminar un objeto "X"
//Se utilizan o manejan con punteros...
//Las direcciones de memoria son importantes


//Para operar una lista enlazada--------> tenemos que tener una estructura de datos (Nodo (puntero))
//Metodos que permiten agregar, eliminar, buscar y mostrar...


//Importacion de libreria
#include <iostream>


//El uso de namespace es para evitar conflictos de nombres y acotar codigo
using namespace std;

//Si no se declara tipo de dato, programa explota...

//Ejecucion principal del programa
int main(){

    //Para declarar un numero
    int numero = 9;

    //Su forma de imprimirlo es la siguiente
    //endl como manipulador de flujo inserta un salto de linea "\n"


    // "<<"---------> incorporar al cout la informacion que queremos...
    //Cout para imprimir en consola
    cout << "El numero es: " << numero << endl;
    

    //Ahora para un caracter


    //El char es para solo un caracter, ejemplo: 'a', 'b'...


    char caracter = 'a';

    cout << "El caracter es: " << caracter << endl;

    //Para un string se maneja similar-----> mas de un "char"
    string nombre = "Juan";

    cout << "El nombres es: " << nombre << endl;

    //Para el manejo de flotantes-------->
    float num_flotante = 3.2;
    cout << "El numero flotante es: " << num_flotante << endl;

    //Para un doble--------> similar a flotante
    double num_doble = 3.14;

    cout << "El numero doble es: " << num_doble << endl;



    //Ejemplo
    //Arreglo de tipo estatico...
    int arreglo[5] = {1,2,3};


    //Arreglo de tipo dinamico...
    int * arreglo2 = new int[5];

    //Creacion de un arreglo dinamico con malloc-----> es que estamos asignando memoria para dicho arreglo (desbordamiento de buffer)
    int * arreglo3 = (int *)malloc(5 * sizeof(int));

    //Calloc y malloc son para asignar memoria
    int * arreglo4 = (int*)calloc(5, sizeof(int));

    return 0; //En este caso indica que el programa ejecuto correctamente...


    //Segmentacion fault---------> es por acceso a memoria no permitida o que no fue asignada...

    //Si es return 1, indica error...

    //Buenas practicas----> liberar memoria de un arreglo dinamico
    free(arreglo3); //Puede afectar a los resultados
}