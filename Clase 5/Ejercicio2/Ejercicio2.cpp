#include <iostream>


//Recordar de siempre utilizar namespace
using namespace std;




//Ejercicio: Escribir un codigo que dado una lista enlazada con elementos desordenados
//Entregue una lista enlazada 2 con los elementos ordenados y ademas sea la suma
//De los elementos de la lista enlazada 1
//Ejemplo
//Lista enlazada 1: 5 -> 2 -> 8 -> 1
//Lista enlazada 2: 1 -> 2 -> 5 -> 8
//Suma: 16


//Se le entrega la estructura de lista enlazada para realizar operaciones y resolucion
//Del ejercicio


//Estructuras de datos
typedef struct nodo{
    int dato;
    struct nodo * puntero;
}nodo;


typedef struct ListaEnlazada{
    nodo * inicio;
}ListaE;


//Descripcion: Funcion que crea una lista enlazada vacia
//Dom: void
//Rec: lista enlazada vacia

ListaE * crear_lista_vacia(){
    ListaE * lista = (ListaE*)malloc(sizeof(ListaE));
    lista->inicio = NULL;
    return lista;
}


//Descripcion: Funcion que verifica si es lista vacia
//Dom: lista enlazada
//Rec: 1 si no contiene elementos, 0 en caso que no

int esListaVacia(ListaE * lista){
    if(lista->inicio == NULL){
        return 1;
    }else{
        return 0;
    }
}


//Descripcion: Funcion que permite insertar un nodo dentro de la lista enlazada
//Dom: Lista enlazada X dato
//Rec: void


void insertarNodo(ListaE * lista, int dato){
    nodo * nuevoNodo = (nodo*)malloc(sizeof(nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->puntero = lista->inicio;
    lista->inicio = nuevoNodo;
}


//Descripcion: Funcion que permite eliminar un nodo de la lista enlazada al inicio
//Dom: Lista enlazada 
//Rec void


void eliminarInicio(ListaE * lista){
    nodo * nuevoNodo;
    if(!esListaVacia(lista)){
        nuevoNodo = lista->inicio;
        //La lista enlazada utiliza nodo, por lo cual podemos llamar a puntero de nodo
        lista->inicio = lista->inicio->puntero;
        free(nuevoNodo);
    }
}


//Descripcion: Funcion que permite recorrer una lista enlazada
//Dom: lista enlazada 
//Rec: void

void recorrerLista(ListaE * lista){
    if(!esListaVacia(lista)){
        nodo * nuevoNodo = lista->inicio;
        while(nuevoNodo != NULL){
            cout << nuevoNodo->dato << " ";
            nuevoNodo = nuevoNodo->puntero;
        }
        cout << endl;
    }
}



//Descripcion: Funcion que ordena una lista enlazada 1 y se guarda en lista enlazada 2
//Dom: Lista enlazada 1 X lista enlazada 2
//Rec: void


void ordenarLista(ListaE * lista1, ListaE * lista2){
    nodo * actual = lista1->inicio;
    while(!esListaVacia(lista1) && actual != NULL){
        insertarNodo(lista2, actual->dato);
        actual = actual->puntero;
    }

    //Ordenar la lista2 utilizando el metodo de burbuja
    //Es decir se va ordenando la lista comparando los elementos
    //Para encontrar el menor y asi sucesivamente en un orden ascendente
    int temp;
    nodo * i;
    nodo * j;
    for(i = lista2->inicio; i != NULL; i = i->puntero){
        for(j = i->puntero; j != NULL; j = j->puntero){
            if(i->dato > j->dato){
                temp = i->dato;
                i->dato = j->dato;
                j->dato = temp;
            }
        }
    }
}


//Descripcion: Funcion que suma los elementos de una lista enlazada
//Dom: lista enlazada
//Rec: suma de los elementos

int sumarElementos(ListaE * lista){
    int suma = 0;
    nodo * actual = lista->inicio;
    while(!esListaVacia(lista) && actual != NULL){
        suma+= actual->dato;
        actual = actual->puntero;
    }
    return suma;
}



int main(){

    //Creacion de listas enlazadas
    ListaE * lista1 = crear_lista_vacia();
    ListaE * lista2 = crear_lista_vacia();

    //Operaciones de insercion
    insertarNodo(lista1, 5);
    insertarNodo(lista1, 2);
    insertarNodo(lista1, 8);
    insertarNodo(lista1, 1);


    cout << "Lista enlazada 1: ";
    recorrerLista(lista1);


    ordenarLista(lista1, lista2);
    cout << "Lista enlazada 2 (ordenada): ";
    recorrerLista(lista2);

    int suma = sumarElementos(lista2);
    cout << "Suma de los elementos de la lista enlazada 2: " << suma << endl;

    return 0;
}

