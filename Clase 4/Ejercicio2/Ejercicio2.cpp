#include <iostream>




//Recordar siempre usar namespace
using namespace std;



//Contexto del problema: una bodega que requiere de la suma de todos sus productos
//Se entrega un arreglo: y dentro del arreglo contiene el valor total (se asume por el enunciado)
//Lo de paquete abierto/cerrado no interesa, solo que es un arreglo y valor total que contiene eso importa


//Recordatorio de funcion recursiva

//---->Caso base o de borde----> donde termina la recursion del programa
//---->Llamada constante a la funcion que permite evaluar tantas veces hasta que llega al caso base


//Entonces... el problema se reduce a realizar una suma recursiva de un arreglo
//Donde el contenido del arreglo es el valor total de los productos


//Descripcion: Funcion que realiza la suma recursiva del arreglo
//Dom: Arreglo X tamano
//Rec: Llamado a esa misma funcion que permite realizar la suma recursiva

//Nuevamente: Tenemos varias formas de llamar a un arreglo
//Vector
//int *arreglo
//int Arreglo[]


int suma_recursiva_productos(int arreglo[], int tamano){
    if(tamano == 0){
        return 0;
    }else{
        return arreglo[tamano - 1] + suma_recursiva_productos(arreglo, tamano - 1);
    }
}


//Llamada al menu principal
int main(){
    int arreglo[5] = {2000, 4000, 5000, 8000, 10000};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    //Se llama a la funcion recursiva
    int resultado = suma_recursiva_productos(arreglo, tamano);

    cout << "El valor total de los productos es: " << resultado << endl;

}