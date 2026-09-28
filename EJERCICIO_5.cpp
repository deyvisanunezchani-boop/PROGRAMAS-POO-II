/*Crean un ejemplo en el que una subclase no puede acceder a 2 métodos de la clase padre, 
realice las pruebas que lo demuestran.*/
#include <iostream>
using namespace std;

    class Persona{
        private:
            void correr();
            void dormir();
        public:
            Persona();
    };

    class Alumno : public Persona{
        public:
            Alumno();
            void probar();
    };

    Persona::Persona(){

    }

    Alumno::Alumno() : Persona(){

    }

    void Persona::correr(){
        cout<<"la Persona esta corriendo"<<endl;
    }

    void Persona::dormir(){
        cout<<"la Persona esta durmiendo"<<endl;
    }

    void Alumno::probar(){
        correr();
        dormir();
    }

int main(){

    Alumno a1;

    a1.probar();

    return 0;
}
