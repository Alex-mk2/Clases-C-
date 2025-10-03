#include <iostream>




//Recordar usar siempre namespace para evitar conflicto de nombres y dejar el código más organico
using namespace std;



//Descripcion: funcion que calcula de forma recursiva la serie de tribounacci
//Dom: numero
//Rec: resultado de la serie de tribounacci

int serie_tribounacci(int numero){
    if(numero == 0 || numero == 1 || numero == 2){
        return (0);
    }else if(numero == 3){
        return (1);
    }else{
        return (serie_tribounacci(numero - 1) + serie_tribounacci(numero - 2) + serie_tribounacci(numero - 3));
    }
}


//Menu principal
int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int tribounacci = serie_tribounacci(numero);
    cout << "El valor de la serie es: " <<  tribounacci << endl;
    return 0;
}