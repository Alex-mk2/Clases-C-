#include <iostream>

//Concepto de lista enlazada


//El concepto importante sobre lista enlazada es pensar
//En cada elemento por separado de una lista
//Con cada elemento disponiendo de una flecha que apunta al siguiente elemento
//Mientras el elemento que es apuntado es donde queremos ir/recorrer
//El largo puede ser indeterminado, y esto se ocupa en muchas actividades
//Su componentes deben ser iguales, es decir si son enteros todo debe ser entero


//En programacion se conoce como puntero, la flecha que apunta al siguiente elemento
//El elemento en cuestion es conocido como nodo

//Suponemos una lista que esta constituida de esta forma
//[2]---->[1]------>[3] esto se conoce como lista enlazada
//Ya que su particularidad es que su forma de operar es distinta a 
//Un arreglo estatico o dinamico

using namespace std;



//Particularidades de representar una lista enlazada
//Existen dos formas de acuerdo a como podemos procesarlas (estructuras de datos)/clases


//Para este caso particular se utiliza estructura de datos para la representación de lista enlazada


//Con esto ya indicamos que tenemos un nodo
//El dato es el valor que va a contener el nodo 
//El puntero es la flecha que va a apuntar al siguiente elemento(nodo)
typedef struct nodo{
    int dato;
    struct nodo * puntero;
}nodo;



//Ahora para la lista enlazada
//Aqui ya tenemos su estructura 
typedef struct ListaEnlazada{
    nodo * inicio;
}ListaE;




//Ahora para ponernos al corriente con ejercicios ya que son necesarios para entender
//Primero que todo crear la estructura de lista vacia


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

//Aqui ya podemos insertar un nodo dentro de la lista enlazada, recuerda que 
//Todo esto va en orden, es decir, desde inicio hasta el fin 

void insertarNodo(ListaE * lista, int dato){
    nodo * nuevoNodo = (nodo*)malloc(sizeof(nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->puntero = lista->inicio;
    lista->inicio = nuevoNodo;
}

//Como hay inserción, tambien debe haber eliminacion 

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


//Como todo, se debe crear una funcion que nos permita recorrer la lista enlazada

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



//Ahora para ejercicios en particular teniendo en cuenta la estructura de lista enlazada
//Escriba un codigo que dado dos listas enlazadas
//Indique si son iguales lo que debe devolver verdadero
//Caso contrario falso


//Recuerda que en C++ se puede utilizar booleanos para saber si es verdadero o falso
bool sonIguales(ListaE * lista1, ListaE * lista2){
    if(esListaVacia(lista1) && esListaVacia(lista2)){
        return true;
    }
    nodo * nodo1 = lista1->inicio;
    nodo * nodo2 = lista2->inicio;
    while(nodo1 != NULL && nodo2 != NULL){
        if(nodo1->dato != nodo2->dato){
            return false;
        }
        nodo1 = nodo1->puntero;
        nodo2 = nodo2->puntero;
    }
    if(nodo1 == NULL && nodo2 == NULL){
        return true;
    }
    return false;
}



//Ahora para realizar su llamado
//Prueba y arquitectura de lista enlazada

int main() {
    ListaE * lista = crear_lista_vacia();
    ListaE * lista2 = crear_lista_vacia();
    insertarNodo(lista, 5);
    insertarNodo(lista, 10);
    insertarNodo(lista, 15);

    
    insertarNodo(lista2, 5);
    insertarNodo(lista2, 10);
    insertarNodo(lista2, 15);
    cout << "Son iguales?: " << sonIguales(lista, lista2) << endl;
    return 0;
}

