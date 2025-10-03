#include <iostream>
#include <vector>


//Problema: Genere un programa que permita calcular de forma recursiva la potencia de un numero
//Funcion----------> realiza una única operacion----------> retorna un resultado
//A excepcion que sea void

//Recursion: Se entiende por recursion el llamado constante de la propia funcion que ha sido
//Definida para realizar multiples veces una operacion 
//A diferencia de una iteracion, se debe ir decrementando para así obtener el valor (en algunos casos sumar)
//Y lo más importante, alcanzar el "Caso base" o conocido como condición de borde...


//Recuerda usar namespace para evitar conflicto de datos y para dejar el código más claro
using namespace std;


//En recursion dos elementos son importantes a la hora de generar soluciones
//1. Caso base: Para detener la recursión
//2. Llamada recursiva a la función: Cuando aun no llega al caso base
//Estructura de potencia----------> n**m---------> 2(base) ** 1 (exponente)


//--------------> (100000000000000000000000022444455454454323223) ** 0 = 1

//Descripcion: funcion que permite calcular la potencia de un numero de forma recursiva
//Dom: base X exponente
//Rec: Potencia del numero de forma recursiva


//Una base de 2 y un exponente de 1
//2 ** 1 = 2------------> base = 2, exponente = 1......
//potencia(2, 1-1) = potencia(2,0)
//---------> 2 * potencia(2,0) = 2 * 1 = 2

//Segunda ejecucion....
//base = 2, exponente = 0
//return 1----------->

//Al final el se realiza el llamado a los resultados obtenidos
//2 * 1 = 2
//resultado = 2

//Recursion: Caso base (condicion de borde)
//---------  Funcion a llamar de forma continua hasta que llegue al caso base

//Existen tres formas de trabajar con una funcion
//Iterativa...
//Recursiva... -------> llamado constante de la funcion (cola)---------> FIFO (primero en entrar, primero en salir)
//Apilada o stack.... ------> almacenamos elementos en una pila--------> apilar/desapilar-----> LIFO(ultimo en entrar, primero en salir)

int potencia(int base, int exponente){
    if(exponente == 0){ //Caso base... //detener a la funcion en su ejecucion
        return 1;
    }else{
        return base * potencia(base, exponente - 1); //Llamado constante de la función
    }
}


//Ejemplo: potencia(2,5)
//En la practica se lee de la siguiente forma el código:
//potencia(2,5)
//Llamada 1: potencia(2, 5) -> llama a potencia(2, 4)
//Llamada 2: potencia(2, 4) -> llama a potencia(2, 3)
//Llamada 3: potencia(2, 3) -> llama a potencia(2, 2)
//Llamada 4: potencia(2, 2) -> llama a potencia(2, 1)
//Llamada 5: potencia(2, 1) -> llama a potencia(2, 0)


//Ahora para proceder con el resultado final
//-potencia(2, 0) retorna 1 (Caso Base)
//-potencia(2, 1) recibe 1 y calcula: 2 * 1 = 2. Retorna 2.
//-potencia(2, 2) recibe 2 y calcula: 2 * 2 = 4. Retorna 4.
//-potencia(2, 3) recibe 4 y calcula: 2 * 4 = 8. Retorna 8.
//-potencia(2, 4) recibe 8 y calcula: 2 * 8 = 16. Retorna 16.
//-potencia(2, 5) recibe 16 y calcula: 2 * 16 = 32. Retorna 32.


//Mismo caso para la suma (tambien se puede aplicar)
//Descripcion: Funcion que permite calcular de forma recursiva una suma de enteros
//Dom: arreglo de numeros enteros
//Rec: Suma de esos numeros


int suma(int * lista_suma, int tamano){
    if (tamano == 0){
        return 0;
    }else{
        return lista_suma[0] + suma(lista_suma + 1, tamano - 1);
    }
}

//Ejemplo: suma
//En la practica se lee de la siguiente forma el código:
//Llamada 1: suma({10, 20, 30}, 3) -> llama a suma({20, 30}, 2)
//Llamada 2: suma({20, 30}, 2) -> llama a suma({30}, 1)
//Llamada 3: suma({30}, 1) -> llama a suma({}, 0)


//Ahora para proceder con el resultado final
//suma({}, 0) retorna 0 (Caso Base, la suma de una lista vacía es 0).
//suma({30}, 1) recibe 0 y calcula: 30 + 0 = 30. Retorna 30.
//suma({20, 30}, 2) recibe 30 y calcula: 20 + 30 = 50. Retorna 50.
//suma({10, 20, 30}, 3) recibe 50 y calcula: 10 + 50 = 60. Retorna 60.





int main(){
    int base;
    int exponente;
    

    //Procesamiento de datos entrantes
    cout << "Ingrese una base: ";
    cin >> base;

    cout << "Ingrese un exponente: ";
    cin >> exponente;


    //Ahora para la suma de forma recursiva
    //vector <int> numeros = {10,20,30};


    //Aqui se realiza la lectura de los numeros a traves de data
    //int suma_r = suma(numeros.data(), numeros.size());


    //Funcion recursiva para una potencia de orden n**m
    int recursion = potencia(base, exponente);
    

    cout << "El valor de la funcion recursiva es: " << recursion << endl;
    //cout << "El valor de la suma recursiva es: " << suma_r << endl;
    return 0;
}