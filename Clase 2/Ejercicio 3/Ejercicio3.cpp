#include <iostream>





//Problema: imprimir todos los impares de forma consecutiva a traves de recursion

//Usar namespace para conflicto de datos, y código más organico
using namespace std;




//Descripcion: funcion que permite calcular la secuencia impar de forma recursiva
//Dom: numero X tamaño
//Rec: void

//---------------> 1,3,5,7,9,11...(2N - 1)


//Traza cualquiera
// Un tamaño de 5 elementos------> tamano = 5
// Un numero inicial de 1 -------> numero = 1

//Primera ejecucion
//---------> 1 > 5 -----> Falso
//else (1)
//numero = 1 + 2 = 3 -------> tamaño = 5


//Segunda ejecucion
//----------> 3 > 5------> Falso
//else (3)
//numero = 3 + 2 = 5 -------> tamaño = 5


//Tercera ejecucion
//-----------> 5 > 5-------> Falso
//else (5)
//numero = 5 + 2 = 7 -------> tamaño = 5


//Cuarta ejecucion
//-----------> 7 > 5 ------> Verdad
//return [] o tecnicamente un void


void secuencia_impar(int numero, int tamano){
    if(numero > tamano){
        return;
    }else{
        cout << numero << " ";
        secuencia_impar(numero + 2, tamano);
    }
}



//Ejecucion del menu principal

int main(){
    int numero;
    int maximo;

    
    cout << "Ingrese un numero: ";
    cin >> numero; //Almacena el valor de entrada del programa


    cout << "Ingrese el maximo numero para mostrar secuencia impar: ";
    cin >> maximo;


    cout << "Secuencia de impares: ";
    secuencia_impar(numero, maximo);
    return 0;
}