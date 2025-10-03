#include <iostream>



//Problema: Genere una funcion que permita obtener el numero maximo de una lista
//A traves de recursion y funcion iterativa
//En particular esto se busca enseñar porque se ve en muchos ejercicios donde no se
//Puede usar max


using namespace std;


//Descripcion: Funcion que permite encontrar el maximo de forma iterativa
//Dom: Arreglo X tamano
//Rec: elemento con el maximo valor de la lista


int maximoValor(int arreglo[], int tamano){
    int maximo = arreglo[0]; //LA primera posicion

    for(int i = 0; i < tamano; i++){
        if(arreglo[i] > maximo){ //Es para encontrar el mayor
            maximo = arreglo[i];
        }
    }
    return maximo;
}


//Descripcion: Funcion que permite encontrar el maximo pero de forma recursiva
//Dom: arreglo X tamano
//Rec: funcion recursiva en la operacion de encontrar el maximo

int maximoRecursivo(int arreglo[], int tamano){
    if(tamano == 1){ //Caso base o condicion de borde (primer elemento)
        return arreglo[0]; //El primer elemento del arreglo
    }else{
        return max(arreglo[tamano - 1], maximoRecursivo(arreglo, tamano - 1));
    }
}






//Ejecucion de la funcion principal
int main(){
    int arreglo[] = {3,2,6,100,250};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Maximo (iterativo): " << maximoValor(arreglo, tamano) << endl;
    cout << "Maximo (recursivo): " << maximoRecursivo(arreglo, tamano) << endl;

    return 0;
}