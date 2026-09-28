//Crean un ejemplo en el que se muestra el encapsulamiento y abstracción
#include <iostream>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
        int dni;

    public:
        Persona(string, int, int);
        void mostrarDatos();
};

Persona::Persona(string _nombre, int _edad, int _dni){
    nombre= _nombre;
    edad= _edad;
    dni= _dni;
}

void Persona::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"DNI: "<<dni<<endl;
}

int main(){

    Persona p1("Deyvis",20,12345678);

    p1.mostrarDatos();

    return 0;
}
