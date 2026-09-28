/*Sobre coherencia, consistencia y el principio de “Una sola responsabilidad”. 
Crean un ejemplo que muestre el “God Class” o “God Object”.*/
#include <iostream>
using namespace std;

    class Persona{
        private:
            string nombre;
            int edad;
        public:
            Persona(string,int);
            void mostrarDatos();
            void trabajar();
            void guardarDatos();
            void correr();
            void llegar();
    };

    Persona::Persona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    void Persona::mostrarDatos(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
    }

    void Persona::trabajar(){
        cout<<nombre<<" en este momento esta trabajando"<<endl;
    }

    void Persona::guardarDatos(){
        cout<<"los datos de "<<nombre<<" se estan guardando"<<endl;
    }

    void Persona::correr(){
        cout<<nombre<<" esta corriendo hacia la oficina "<<endl;
    }

    void Persona::llegar(){
        cout<<nombre<<" llego a la oficina antes de lo previsto"<<endl;
    }

int main(){

    Persona p1("Rodrigo",20);

    p1.mostrarDatos();
    p1.trabajar();
    p1.guardarDatos();
    p1.correr();
    p1.llegar();

    return 0;
}
