#include <iostream>

//Ejercicio 3: Sumatoria de gauss pero en c++
//Particularidad: Misma lógica, pero por la sintaxis de C++ hay que especificar bien el tipo de dato
//Ya que a diferencia de python, los datos quedan fijos y el interprete no adivina que dato es

using namespace std;


//Menu principal
int main(){


    //Se ingresa un numero por pantalla
    int numero;
    cout << "Ingrese un numero: ";

    //Se captura el numero
    cin >> numero;

    //Necesitamos un iterador
    int i = 1;

    //Y tambien un iterador
    int sumatoria = 0;

    while(i <= numero){
        sumatoria = sumatoria + i; //sumatoria += i
        i+=1;
    }

    cout << "La sumatoria es: " << sumatoria << endl;

    return 0;
}