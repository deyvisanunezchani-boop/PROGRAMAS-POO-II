/*Sobre el ejemplo en el punto 8, crean la versión en el que se cumple el 
principio “Una sola responsabilidad” o también conocido como Refactoring.*/
#include <iostream>
using namespace std;

    class Persona{
        private:
            string nombre;
        public:
            Persona(string);
            void mostrarDatos();
    };

    class Trabajo{
        private:
            string actividad;
        public:
            Trabajo(string);
            void trabajar();
    };

    class Pasatiempo{
        private:
            string informacion;
        public:
            Pasatiempo(string);
            void jugarfutbol();
    };

    Persona::Persona(string _nombre){
        nombre = _nombre;
    }

    Trabajo::Trabajo(string _actividad){
        actividad = _actividad;
    }

    Pasatiempo::Pasatiempo(string _informacion){
        informacion = _informacion;
    }

    void Persona::mostrarDatos(){
        cout<<"Nombre: "<<nombre<<endl;
    }

    void Trabajo::trabajar(){
        cout<<"Actividad: "<<actividad<<endl;
    }

    void Pasatiempo::jugarfutbol(){
        cout<<"Pasatiempo: "<<informacion<<endl;
    }

int main(){

    Persona p1("Rodrigo");
    Trabajo t1("trabajar");
    Pasatiempo d1("jugar futbol");

    p1.mostrarDatos();
    t1.trabajar();
    d1.jugarfutbol();

    return 0;
}
