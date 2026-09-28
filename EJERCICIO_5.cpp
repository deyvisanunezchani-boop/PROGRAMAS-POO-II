/*Crean un ejemplo en el que una subclase no puede acceder a 2 métodos de la clase padre, 
realice las pruebas que lo demuestran.*/
#include <iostream>
using namespace std;

    class persona{
        private:
            void correr();
            void dormir();
        public:
            persona();
    };

    class alumno : public persona{
        public:
            alumno();
            void probar();
    };

    persona::persona(){

    }

    alumno::alumno() : persona(){

    }

    void persona::correr(){
        cout<<"la persona esta corriendo"<<endl;
    }

    void persona::dormir(){
        cout<<"la persona esta durmiendo"<<endl;
    }

    void alumno::probar(){
        correr();
        dormir();
    }

int main(){

    alumno a1;

    a1.probar();

    return 0;
}
