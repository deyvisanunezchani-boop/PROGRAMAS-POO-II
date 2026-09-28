/*Crean un ejemplo en el que se pueden modificar y leer los valores de 
los datos de un objeto sin métodos de interfaz (no hay encapsulamiento)*/
#include <iostream>
using namespace std;

    class Persona{
        public:
            string nombre;
            int edad;
    };

int main(){

    Persona p1;

    p1.nombre = "rodrigo";
    p1.edad = 20;

    cout<<"Nombre: "<<p1.nombre<<endl;
    cout<<"Edad: "<<p1.edad<<endl;

    cout<<endl;

    p1.nombre = "alex";
    p1.edad = 21;

    cout<<"Nombre: "<<p1.nombre<<endl;
    cout<<"Edad: "<<p1.edad<<endl;

    cout<<endl;
    
    p1.nombre = "eder";
    p1.edad = 22;

    cout<<"Nombre: "<<p1.nombre<<endl;
    cout<<"Edad: "<<p1.edad<<endl;

    return 0;
}
