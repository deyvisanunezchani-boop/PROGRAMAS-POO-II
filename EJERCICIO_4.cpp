/*Crean un ejemplo en el que se utiliza el destructor de la clase, 
debe ser explícito el uso del mismo.*/
#include <iostream>
using namespace std;

    class Perro{
        private:
            string nombre, raza;
        public:
            Perro(string,string);
            ~Perro();
            void mostrasdatos();
            void jugar();
    };

    Perro::Perro(string _nombre,string _raza){
        nombre = _nombre;
        raza = _raza;
    }

    Perro::~Perro(){
        cout<<"el objeto Perro fue destruido"<<endl;
    }

    void Perro::mostrasdatos(){
        cout<<"Nombre:"<<nombre<<endl;
        cout<<"Raza:"<<raza<<endl;
    }

    void Perro::jugar(){
        cout<<"el Perro "<<nombre<<" esta jugando"<<endl;
    }

int main(){

    Perro p1("fido","doberman");

    p1.mostrasdatos();
    p1.jugar();

    p1.~Perro();

    return 0;
}
