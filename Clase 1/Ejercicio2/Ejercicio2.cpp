#include <iostream>

//math te da acceso a funciones matematicas, como pi, sqrt, pow
#include <cmath>

//Problema 2: Diseñe un programa que permita calcular las areas y perimetro de las siguientes figuras
//1. Area y perimetro de un triangulo rectangulo
//2. Area de un circulo y perimetro
//3. Area de un cuadrado y perimetro
//4. Area de un sector circular

//Conversion de tipos
using namespace std;

//Variables globales que no cambian su ejecucion
//Se obtiene el numero pi a traves de la libreria cmath

//Esto es una constante que no cambia su valor
double PI = M_PI; //Indica que tenemos el valor de PI




int main(){

    //Para el inciso 1 se requiere lo siguiente: Altura y lado... por lo cual se debe capturar el valor
    float altura;
    float lado;
    float area_triangulo;
    float perimetro_triangulo;
    float radio;


    //Se ingresa valor de altura y se captura
    cout << "Ingrese el valor de la altura: ";
    cin >> altura;
    if(altura < 0){
        cout << "La altura no debe ser negativa" << endl;
        return 1; //Significa que hay error
    }


    //Lo mismo para el lado de la figura geometrica
    cout << "Ingrese el valor de la base: ";
    cin >> lado;
    if(lado < 0){
        cout << "La base no puede ser negativa";
        return 1;
    }


    //Lo mismo para el radio
    cout << "Ingrese el valor del radio: ";
    cin >> radio;
    if(radio < 0){
        cout << "El radio no puede ser negativo";
        return 1;
    }


    //Para calcular el area del triangulo basta con utilizar las variables que capturaron los valores
    area_triangulo = (lado * altura) / 2;
    cout << "El area del triangulo es: " << area_triangulo << endl;


    //Lo mismo para su perimetro
    perimetro_triangulo = (lado + lado + lado);
    cout << "El perimetro del triangulo es: " << perimetro_triangulo << endl;


    //******************************Inciso 2: Area de un circulo y perimetro**************************//
    float perimetro_circulo;
    float area_circulo;

    perimetro_circulo = (2 * PI * radio);
    area_circulo = (PI * (radio * radio)); //(7 * 7)------> (pow(7,2))----> (7 * 7)

    cout << "El perimetro del circulo es: " << perimetro_circulo << endl;
    cout << "El area del circulo es: " << area_circulo << endl;


    //*****************************Inciso 3: Area y perimetro de un cuadrado***************************/
    float perimetro_cuadrado;
    float area_cuadrado;

    perimetro_cuadrado = (4 * lado);
    area_cuadrado = (lado * lado);

    cout << "El perimetro del cuadrado es: " << perimetro_cuadrado << endl;
    cout << "El area del cuadrado es: " << area_cuadrado << endl;


    //******************************Inciso 4: Area de un sector circular ******************************/
    float area_sector_c;
    float angulo;
    cout << "Ingrese un angulo entre (0-360): ";
    cin >> angulo;

    area_sector_c = (PI * (radio * radio) * angulo) / (360);
    cout << "El area de un sector circular es: " << area_sector_c << endl;
}

