#include <iostream>
#include <vector>

//Tercer ejercicio
//Particularmente UML

//Aqui se deben extraer las siguientes clases de acuerdo a la lectura (si o si leer todo)


//Por lo cual de acuerdo al problema se tiene lo siguiente:



//Tenemos la clase profesor con atributos nombre_profesor y metodos crear_curso, editar_curso, publicar_curso

//Se tiene la clase curso que contiene: nombre_curso, cupo, estado, fecha_inicio, fecha_fin
//El curso contiene la clase "unidades"
//En este caso la clase unidades tiene los atributos: nombre_unidad, lista_contenidos, lista_eval


//Clase estudiante: con atributos nombre, rut, edad
//Tiene el metodo de inscribirse_curso(estado_curso), crear_cuenta(nombre, rut, edad)

//Ademas esta la clase Inscripcion: estado_inscripcion, estado_curso, nota_final





//Ahora bien para la parte especifica del programa que es crear una clase, se diseña del siguiente
//Modo


//recuerda usar namespace
using namespace std;




//El constructor o clase curso se debe implementar del siguiente modo
//Si a modo de ejemplo se coloco lo que es la clase en public para atributos
//Cuando se diseñen clases se recomienda colocar los atributos de esa clase
//En privado para que no haya cruce con las otras clases al momento 
//De crearlas (fin de la prueba)

class Curso{
    private: //Atributos estan publicos, es decir, puede acceder a ellos
    string nombre_curso; //Atributos...
    bool estado_curso;
    int cupo;
    string fecha_inicio;
    string fecha_final;


//Constructor--------> es el llamado a esa clase o instancia



public:
    Curso(string nombre, bool estado, int cupo, string fecha_inicio, string fecha_final){
        nombre_curso = nombre; //Asignaciones
        estado_curso = estado;
        cupo = cupo;
        fecha_inicio = fecha_inicio;
        fecha_final = fecha_final;

        cout << nombre << endl;
    }
};



int main(){
    Curso("Curso de C++", true, 30, "2024-07-01", "2024-12-31");
    Curso("Curso de Python", true, 25, "2024-08-01", "2024-11-30");
    Curso("Curso de Java", false, 20, "2024-09-01", "2024-10-31");
    Curso("Odio a cisterna", true, 15, "2025-09-27", "2030-12-31");
    return 0;
}







