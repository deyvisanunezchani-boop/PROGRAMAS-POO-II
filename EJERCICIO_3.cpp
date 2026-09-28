/*Crean un ejemplo en el que se pueden crear 3 objetos con diferentes constructores, 
debe considerar al constructor por defecto*/
#include <iostream>
using namespace std;

    class Persona{
        private:
            string nombre;
            int edad;
        public:
            Persona();
            Persona(string);
            Persona(string,int);
            void mostrarPersona();
    };

    Persona::Persona(){
        nombre = "sin nombre";
        edad = 0;
    }

    Persona::Persona(string _nombre){
        nombre = _nombre;
        edad = 0;
    }

    Persona::Persona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    void Persona::mostrarPersona(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"edad: "<<edad<<endl;
    }

int main(){

    Persona p1;
    Persona p2("rodrigo");
    Persona p3("alex",20);

    p1.mostrarPersona();

    cout<<endl;

    p2.mostrarPersona();

    cout<<endl;

    p3.mostrarPersona();

    return 0;
}
