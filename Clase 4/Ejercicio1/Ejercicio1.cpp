#include <iostream>
#include <string>




//Detalles importantes de la pregunta
//Nos dan los descuentos asociados a profesores y estudiantes
//Si cliente es estudiante-----> 10% descuento del total----> 0.1
//Si cliente es funcionario----> 5% descuento del total----->0.05
//Caso contrario no hay descuento

//Productos en venta
//cafe = 1200
//te = 1000
//sandwich = 3500
//jugo = 1500
//Galleta = 800

using namespace std;



int main(){
    
    //Productos constantes
    int CAFE = 1200;
    int TE = 1000;
    int SANDWICH = 3500;
    int JUGO = 1500;
    int GALLETA = 800;


    //Control del ciclo
    float total = 0.0; //Contabilizar cada compra que se realiza...
    string producto;
    char opcion = 's'; //Comenzar con un si


    //Operaciones para mantener el programa en ejecucion mientras se ingresan mas productos
    while(opcion == 's'){ //Mientras opcion sea "si"
        cout << "Indique el producto que desea agregar: ";
        cin >> producto; //Captura de informacion de cout

        if(producto == "cafe"){
            total = total + CAFE; // a la variable total, sumale el monto del cafe
        }
        else if(producto == "te"){
            total = total + TE; //Se agrega el monto del te a la variable "total"

        }else if(producto == "sandwich"){
            total = total + SANDWICH;

        }else if(producto == "jugo"){
            total = total + JUGO;

        }else if(producto == "galleta"){
            total = total + GALLETA;

        }else {
            cout << "Producto invalido." << endl;
        }
        
        //Consulta si desea agregar mas productos
        cout << "\nDesea agregar mas productos (s/n): ";
        cin >> opcion; //Capturamos "si o no"
    }

    //Aqui se calculan los descuentos
    if(total > 0.0){ //string toma lista de caracteres //Char solo una letra "a"
        string tipo_cliente; //Vamos a seleccionar si es estudiante o profe
        float descuento = 0.0;
        
        cout << "Es usted estudiante o profesor?: "; //tipo_cliente == e
        cin >> tipo_cliente; 

        
        if(tipo_cliente == "estudiante"){
            descuento = 0.10;

        }else if(tipo_cliente == "profesor"){ //tipo_cliente == p
            descuento = 0.05; 

        }else{
            cout << "No se aplica descuento." << endl;
        }

        
        //Calculo del monto final con el descuento aplicado
        int monto_desc = total * descuento; //Nos dara el monto a descontar (1000 * 0.1 = 100)
        int monto_final = total - monto_desc; //10000 - 100 = 9900
        cout << "El total a pagar es: $" << monto_final << endl;
        
    }else{
        cout << "No se seleccionaron productos. ¡Adiós!" << endl;
    }

    return 0;
}

