#include <iostream>

//Problema: Genere un programa que permita contar si aparece alguna vocal en el texto
//Aprendizaje: Para bucles y condiciones


//Recuerda usar el namespace para evitar conflictos con el tipo de dato
using namespace std;
//Std::cout

//Podemos definirla como variable global



int main(){
    string vocales = "aeiou";

    //Se ingresa la palabra o texto (hola)-------> (viva el rock)
    string texto;
    cout << "Ingrese el texto: ";

    //Se guarda el valor ingresado
    cin >> texto;

    //Genera un iterador y contador
    int i = 0;
    int contador = 0;

    //Se revisa el largo del texto
    while(i < texto.length()){ //Posibles formas de obtener largo: lenght,
        if(texto[i] == 'a' || texto[i] == 'e'|| texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            contador++;
        }
        i++;
    }

    //Se imprime por pantalla la cantidad de veces que aparecio una vocal en el texto...
    cout << "La cantidad de veces que aparecio una vocal es: " << contador << endl;
}