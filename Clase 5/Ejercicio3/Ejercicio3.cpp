#include <iostream>





//Recordar de siempre utilizar namespace
using namespace std;


/*
Después de obtener su grado de doctorado, Cristina se ha convertido en toda una celebridad en su 
universidad, y su perfil de una determinada red social está lleno de solicitudes de contacto. Con el 
deseo de quedar bien con todas y todos, Cristina ha aceptado todas las solicitudes. Sin embargo, 
con el correr de los días, entrar a su cuenta de la red social se ha transformado en una avalancha de 
noticias y posteos. Simplemente, no alcanza a mirar todo y muchos de sus nuevos contactos se 
resienten porque no les pone ‘like’ a sus posteos, mientras que a otros sí. Para evitarse problemas, 
Cristina ha decidido eliminar a algunos contactos de su red social. Como ella sabe la popularidad de 
cada uno de los contactos que tiene, ha decidido eliminar a quienes tengan popularidad menor a la 
media. Escribir un codigo en c++ que ayude a Cristina a identificar exactamente cuáles contactos 
debe eliminar, según su requerimiento. Solamente se puede utilizar el TDA lista enlazada. Se debe 
ingresar el número N de contactos que Cristina tiene actualmente, el número K de contactos que 
Cristina quiere eliminar como máximo y la popularidad de los actuales contactos de Cristina. Se 
deben mostrar los números que representan la popularidad de los contactos de Cristina después de 
filtrar según la restricción indicada.

*/


//Misma indicacion, solo se puede hacer con lista enlazada 
//No se puede utilizar otra estrategia

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

//Descripcion: Funcion que permite insertar un nodo al final de la lista enlazada
//Dom: Lista enlazada X dato
//Rec: void

void insertarNodoFinal(ListaE * lista, int dato){
    nodo * nuevoNodo = (nodo*)malloc(sizeof(nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->puntero = NULL;

    if(lista->inicio == NULL){
        lista->inicio = nuevoNodo;
    } else {
        nodo * actual = lista->inicio;
        while(actual->puntero != NULL){
            actual = actual->puntero;
        }
        actual->puntero = nuevoNodo;
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


//Descripcion: Funcion que calcula la media de los elementos de una lista enlazada
//Dom: lista enlazada
//Rec: media de los elementos

int calcularMedia(ListaE * lista){
    int suma = 0;
    int contador = 0;
    nodo * actual = lista->inicio;
    while(!esListaVacia(lista) && actual != NULL){
        suma+= actual->dato;
        contador++;
        actual = actual->puntero;
    }
    return (suma / contador);
}


//Descripcion: Funcion que libera la memoria de una lista enlazada
//Dom: lista enlazada
//Rec: void

void liberarLista(ListaE * lista){
    nodo * actual = lista->inicio;
    while(actual != NULL){
        nodo * temp = actual;
        actual = actual->puntero;
        free(temp);
    }
    free(lista);
}



//Descripcion: Funcion que elimina contactos con popularidad menor a la media
//Dom: lista enlazada
//Rec: void

void eliminarContactosPopularidad(ListaE * lista, int media, int k){
    nodo * actual = lista->inicio;
    nodo * anterior = NULL;
    int eliminados = 0;

    //Se recorre mientras el nodo no sea vacio y no se hayan eliminado k contactos
    while(actual != NULL && eliminados < k){
        if(actual->dato < media){
            nodo * aEliminar = actual;
            if(anterior == NULL){
                lista->inicio = actual->puntero;
                actual = lista->inicio;
            }else{
                anterior->puntero = actual->puntero;
                actual = anterior->puntero;
            }
            free(aEliminar);
            eliminados++;
        }else{
            anterior = actual;
            actual = actual->puntero;
        }
    }
}
    



int main(){
    ListaE * lista = crear_lista_vacia();
    int n, k, popularidad;
    cout << "Ingrese el numero de contactos (N): ";
    cin >> n;
    cout << "Ingrese el numero maximo de contactos a eliminar (K): ";
    cin >> k;
    cout << "Ingrese la popularidad de los contactos: " << endl;
    for(int i = 0; i < n; i++){
        cin >> popularidad;
        insertarNodoFinal(lista, popularidad);
    }
    cout << "Contactos antes de eliminar: ";
    recorrerLista(lista);
    int media = calcularMedia(lista);
    eliminarContactosPopularidad(lista, media, k);
    cout << "Contactos despues de eliminar: ";
    recorrerLista(lista);
    liberarLista(lista);
    return 0;
}