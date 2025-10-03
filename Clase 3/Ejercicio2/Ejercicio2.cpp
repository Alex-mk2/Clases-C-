#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

//Problema 2: Desarrolla un programa en C++ que dada una lista de numeros permita determinar
//Que numeros en la lista tienen el mismo valor que su posicion

using namespace std;


//Descripcion: Funcion que permite llenar una lista
//Dom: vector(arreglo lista)-------> arreglo[]--------> int * arreglo---------> C
//Rec: lista--------> void solamente realiza algo sin devolver

vector <int> llenar_lista(int n){ //Estamos solicitando un arreglo de tipo dinamico
    vector<int> lista(n); //---------> lista(2)--------> [0][1][2]
    for(int i = 0; i < n; i++){ //i = 0------> i < 2; i + 1
        lista[i] = i; //--------->lista[0] = 0
                      //--------->lista[1] = 1
                      //--------->lista[2] = 2
    }
    return lista; //--------> lista = [0][1][2]-----de forma ordenada
}



//Descripcion: Funcion que permite encontrar un valor en la misma posicion
//Dom: lista
//Rec: lista encontrado

vector <int> encontrar_elemento(vector <int> lista){ //Arreglo de tipo dinamico por vector
    vector <int> encontrado; //lista de elementos int (int * arreglo) (int arreglo[])
    for (int i = 0; i < lista.size(); i++){
        if(lista[i] == i){ //Si la lista[i] == elemento
                           //Si la lista[5] == 5
            encontrado.push_back(lista[i]);
        }
    }
    return encontrado;
}


//Lista con valores-----------> [0][1][2][3][4][5]
//elemento = 5
//iterador = 0
//largo lista = 5

//Primera iteracion
//lista[0] == 0-----------> lista[0] = 0 es igual al elemento = 0
//Lista[0] = 0
//iterador = 0------------> lista[0] == 0 --------> 0 == 0
//vector encontrado (lista)------> [0]


//Segunda iteracion
//lista[1] = 1
//iterador = 1 -----------> lista[1] == 1
//vector encontrado (lista) = [0][1]



//Ejecucion principal
int main(){
    
    //Procesamiento de datos
    cout << "Ingrese el numero para llenar la lista: ";
    int n;
    cin >> n;

    
    //Se realiza el llamado para llenar la lista
    vector<int> lista = llenar_lista(n);


    //Luego se ordena la lista--------> (le damos un inicio y un)
    random_shuffle(lista.begin(), lista.end());


    //Se imprime esta lista
    cout << "Lista: [";
    for (int i = 0; i < n; i++) {
        cout << lista[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;


    //Luego se encuentra el elemento
    vector<int> encontrado = encontrar_elemento(lista);


    //Se imprime este resultado
    cout << "[";
    for (size_t i = 0; i < encontrado.size(); i++) {
        cout << encontrado[i];
        if (i < encontrado.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}


