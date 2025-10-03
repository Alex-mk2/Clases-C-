//Librerias, siempre se empieza con eso
#include <iostream>


//Uso de name espace para evitar conflictos de nombres
using namespace std;


//Escriba un programa que se le entrega dos numeros y que imprima lo siguiente
//1. Suma de los numeros
//2. Multiplicacion de los numeros
//3. Division de los numeros
//4. Resta de los numeros
//5. Mayor de los numeros
//6. Menos de los numeros
//7. Promedio de los numeros


//Funcion principal
int main(){

    //****************************************Valores de entrada***************************/

    //Se declara el primer numero
    int numero;

    //Segundo numero
    int numero2;

    //Contador
    float contador = 0.0;

    //Pide por pantalla //Entrada como tal de datos (in) //Salida de datos------> (out)
    cout << "Ingrese el primero numero: ";

    //Cin lo que permite es leer la entrada dictada por el usuario
    cin >> numero; //Cin procesa la entrada--------> enviamos el flujo de datos--------> numero

    //Cin captura el numero "3" de la entrada de cout--------> se envia a la variable numero------> numero = 3
    //Lineas de ">>" es un envio de flujo de dato a una variable, numero toma el valor de 3

    //Incrementamos el contador
    contador = contador + 1;
    //Un numero-----> numero = 3-----> contador = 1.0

    //Se pide el segundo numero
    //Entrada en cout sera el 5
    cout << "Ingrese el segundo numero: ";

    //El cin procesa la entrada, toma el valor de 5 y envia el dato a variable numero2
    //numero2 = 5
    cin >> numero2;
    contador = contador + 1;
    //numero = 3
    //numero2 = 5
    //contador = 2

    //-----------> numero = 3
    //-----------> numero2 = 5


    //**********************************Operaciones*********************************************/

    //Inciso 1: Para la suma se realiza lo siguiente 
    cout << "La suma de los numeros son: " << numero + numero2 << endl;


    //Inciso 2: Para la resta se realiza lo siguiente
    cout << "La resta de los numeros son: " << numero - numero2 << endl;


    //Inciso 3: Para la division se realiza lo siguiente
    cout << "La division de los numeros son: " << (numero / numero2) << endl;


    //Inciso 4: Para la multiplicacion se realiza lo siguiente
    cout << "La multiplicacion de los numeros son: " << (numero * numero2) << endl;


    //Inciso 5: Para obtener el mayor de los numeros
    if(numero > numero2){
        cout << "El numero es el mayor con: " << numero << endl;
    }else{
        cout << "El numero2 es el mayor con: " << numero2 << endl;
    }


    //Inciso 6: Para determinar el numero menor
    if(numero < numero2){
        cout << "El numero es el menor con: " << numero << endl;
    }else{
        cout << "El numero2 es el menor con: " << numero2 << endl;
    }


    //Inciso 7: Promedio de los dos numeros
    cout << "El promedio de los dos numeros son: " << (numero + numero2) / contador << endl;


    return 0; 
}