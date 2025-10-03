#include <iostream>
#include <vector>
#include <cmath>

//Problema: Genere de forma recursiva un programa que utilice divide y conquista
//Para encontrar el numero 
//Nota: Divide y conquista es un metodo que consiste en dividir
//Una lista, en diferentes trozos lo que permite resolver pequeñas partes 
//Primero para luego ir trazo por trazo hasta lograr resolver todas las partes
//Divide y conquista funciona de 2, es decir, se divide en dos elementos
//La lista una vez que se aplica DYC


using namespace std;

//Un arreglo en C esta construido de esta forma
//int * arreglo-------> pertenece a C y es dinamico y siempre tener cuidado con la asignacion de memoria
//int arreglo[]-------> pertenece a C y es estatico
//vector <int> arreglo; ----------> C++ y puede ser dinamico o estatico

//Recordatorio de recursion: Se utiliza la misma funcion para retornar su operacion


//Descripcion: Funcion que permite realizar divide y conquista de forma recursiva para buscar un numero
//Dom: lista X inicio X fin
//Rec: La funcion recursiva como tal para realizar la busqueda de un numero

bool buscarNumero(vector <int> lista, int inicio, int fin, int elemento){
    if(inicio > fin){ //---------> [2](inicio)//[5][8][10]//(fin)[25]//[]-------> inicio > fin
                      //---------> [25] > []---------> ya no hay elementos en (fin) 
        return false; //Ya no vamos a encontrar el elemento, porque no hay elemento
    }
    //Pivote

    //ListaInicial: [2][5][8][10][25]--------> DYC---------> [2] // [5][8][10] // [25]
    //Inicio: [2]
    //Fin: [25]
    //Medio: [5][8][10]
    int medio = inicio + (fin - inicio) / 2;


    if(lista[medio] == elemento){ //--------> si el elemento es 8 y lista[medio] = [5][8][10]
                                 // --------> si el elemento es 12 y la lista[medio] = [5][8][10]
        return true; //Porque lo hemos encontrado
    }

    //ListaInicial: [2][5][8][10][25]--------> DYC---------> [2] // [5][8][10] // [25]
    //Inicio: [2]
    //Fin: [25]
    //Medio: [5][8][10]


    //Para este caso [2](inicio)<----------[5]<---------[8]<---------[10]
    //Si el elemento se encuentra en el extremo izquierdo
    
    if(lista[medio] > elemento){ 
        return buscarNumero(lista, inicio, medio - 1, elemento);

    //En caso que se encuentre en el otro extremo derecho
    //---------> [5]---------->[8]------------->[10]------------>[25](fin)
    }else{
        return buscarNumero(lista, medio + 1, fin, elemento);
    }
}


int main(){
    
    //Se define un vector de numeros
    vector <int> numeros = {2,3,5,7,9,10,100}; //---------> [2] // [3][5][7][9][10] // [100]
    int buscar = 7;


    //Tipos de datos: int, float, double, bool---------> (1 si es falso, 0 si es verdadero)
    //Dos opciones: Falso en caso de que no se encuentre, verdadero en caso que si
    bool elemento_Buscar = buscarNumero(numeros, 0, numeros.size() - 1, buscar); //Tamaño de (6 - 1) = 5

    if(elemento_Buscar){ //Es que si el elemento a buscar se encuentra o no
        cout << "Se ha encontrado elemento: " << buscar << endl;
    }else{
        cout << "No se ha encontrado el elemento: " << buscar << endl;
    }
}