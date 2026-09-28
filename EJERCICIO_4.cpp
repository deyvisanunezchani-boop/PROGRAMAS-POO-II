/*Crean un ejemplo en el que se utiliza el destructor de la clase, 
debe ser explícito el uso del mismo.*/
#include <iostream>
using namespace std;

    class perro{
        private:
            string nombre, raza;
        public:
            perro(string,string);
            ~perro();
            void mostrasdatos();
            void jugar();
    };

    perro::perro(string _nombre,string _raza){
        nombre = _nombre;
        raza = _raza;
    }

    perro::~perro(){
        cout<<"el objeto perro fue destruido"<<endl;
    }

    void perro::mostrasdatos(){
        cout<<"Nombre:"<<nombre<<endl;
        cout<<"Raza:"<<raza<<endl;
    }

    void perro::jugar(){
        cout<<"el perro "<<nombre<<" esta jugando"<<endl;
    }

int main(){

    perro p1("fido","doberman");

    p1.mostrasdatos();
    p1.jugar();

    p1.~perro();

    return 0;
}
