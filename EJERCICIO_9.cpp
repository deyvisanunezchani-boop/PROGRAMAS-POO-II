/*Sobre el ejemplo en el punto 8, crean la versión en el que se cumple el 
principio “Una sola responsabilidad” o también conocido como Refactoring.*/
#include <iostream>
using namespace std;

    class persona{
        private:
            string nombre;
        public:
            persona(string);
            void mostrarDatos();
    };

    class trabajo{
        private:
            string actividad;
        public:
            trabajo(string);
            void trabajar();
    };

    class pasatiempo{
        private:
            string informacion;
        public:
            pasatiempo(string);
            void jugarfutbol();
    };

    persona::persona(string _nombre){
        nombre = _nombre;
    }

    trabajo::trabajo(string _actividad){
        actividad = _actividad;
    }

    pasatiempo::pasatiempo(string _informacion){
        informacion = _informacion;
    }

    void persona::mostrarDatos(){
        cout<<"Nombre: "<<nombre<<endl;
    }

    void trabajo::trabajar(){
        cout<<"Actividad: "<<actividad<<endl;
    }

    void pasatiempo::jugarfutbol(){
        cout<<"pasatiempo: "<<informacion<<endl;
    }

int main(){

    persona p1("Rodrigo");
    trabajo t1("trabajar");
    pasatiempo d1("jugar futbol");

    p1.mostrarDatos();
    t1.trabajar();
    d1.jugarfutbol();

    return 0;
}
