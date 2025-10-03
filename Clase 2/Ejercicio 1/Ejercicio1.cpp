#include <iostream>
#include <vector>

//Vector es una libreria para generar listas dinamicas o arreglos dinamicos...


//Problema: Genere un programa que permita ingresar un notas. Luego se debe calcular lo siguiente:
//1. Promedio de notas
//2. Mejor nota ingresada
//3. Peor nota ingresada

//Crear arreglos de diferentes formas...
//int arreglo[5]; //Arreglo clasico estatico---------> tambien se puede hacer en C
//int * arreglo_d; //Arreglo dinamico----------> es heredado de C
//int arreglo_3 = new int[5];
//vector <int> arreglo_4; //Es propio de C++

//Se tendrá un enfoque hibrido entre funciones y estructura
//Recuerda usar namespace para evitar el conflicto entre los datos
using namespace std;


//Descripcion: Funcion que permite calcular el promedio de notas de un arreglo
//Dom: Arreglo de notas (lista de notas) o en caso que no tenga argumento, void...
//Rec: Promedio de notas

//Aqui en C++ tenemos dos formas------> size() y lenght()....


float calcular_promedio(vector <float> notas){ 
    if(notas.empty()){ //Nuestro arreglo notas es vacio "[]"
        return 0.0; //Esto por el tipo de dato--------> no se ingreso estudiantes o no hay estudiantes
    }
    float suma_notas = 0.0;
    for(int i = 0; i < notas.size(); i++){ //notas[0]...notas[1]...notas[2]...
        suma_notas += notas[i];  
    }
    return (suma_notas / notas.size()); //Promedio------> float
}


//Descripcion: Funcion que permite contar los estudiantes aprobados
//Dom: Arreglo de notas
//Rec: estudiantes aprobados


int contar_aprobados(vector <float> notas){
    if(notas.empty()){
        return 0;
    }
    int aprobados = 0; //Inicializar en 0
    for (int i = 0; i < notas.size(); i++){
        if(notas[i] >= 4.0){
            aprobados++;
        }
    }
    return aprobados;
}


//Descripcion: Funcion que permite contar los estudiantes reprobados
//Dom: Arreglo de notas
//Rec: estudiantes reprobados

int contar_reprobados(vector <float> notas){
    if(notas.empty()){
        return 0;
    }
    int reprobados = 0;
    for(int i = 0; i < notas.size(); i++){
        if(notas[i] < 4.0){
            reprobados++;
        }
    }
    return reprobados;
}


//Menu principal...
int main(){

    //Forma de generar un arreglo en C++ 
    vector <float> calificaciones_estudiantes;
    //Calificaciones_estudiantes = [];
    int estudiantes;
    float nota;
    

    //Procesamiento de datos
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> estudiantes;


    //Ahora se deben ingresar las notas y deben ser menor que la cantidad de estudiantes
    while(calificaciones_estudiantes.size() < estudiantes){ 
        cout << "Ingrese la nota del estudiante: ";
        cin >> nota;


        //Validaciones de las notas que se ingresan por el usuario
        if(nota >= 1.0 && nota <= 7.0){ //------> and ------> python --------> 1.0 <= nota <= 7.0
            calificaciones_estudiantes.push_back(nota); //-------> variacion de append (sinonimo de append)
        }else{
            cout << "Se ha ingresado una nota de forma incorrecta" << endl;
        }
    }


    //Luego para calcular el promedio de notas
    float promedio = calcular_promedio(calificaciones_estudiantes);

    //Para calcular la cantidad de aprobados
    int estudiantes_aprobados = contar_aprobados(calificaciones_estudiantes);

    //Para calcular los estudiantes reprobados
    int estudiantes_reprobados = contar_reprobados(calificaciones_estudiantes);


    cout << "Informe de notas" << endl;
    cout << "Promedio de notas es: " << promedio << endl;
    cout << "Cantidad de aprobados: " << estudiantes_aprobados << endl;
    cout << "Cantidad de reprobados: " << estudiantes_reprobados << endl;
    return 0;
}


//Particularidades: Se puede hacer de muchas formas más
//Pero es conveniente recordar la lógica de programación
//Mas que utilizar metodos avanzados...