/*Crean un ejemplo en el sólo se puede modificar y leer los valores de los 
datos de un objeto a través de métodos de interfaz (hay encapsulamiento).*/
#include <iostream>
using namespace std;

    class Persona{
        private:
            string nombre;
            int edad;
        public:
            Persona();
            void setPersona(string,int);
            string getnombre();
            int getedad();
    };

    Persona::Persona(){

    }

    void Persona::setPersona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    string Persona::getnombre(){
        return nombre;
    }

    int Persona::getedad(){
        return edad;
    }

int main(){

    Persona Persona1;

    Persona1.setPersona("rodrigo",20);

    cout<<"Nombre: "<<Persona1.getnombre()<<endl;
    cout<<"Edad: "<<Persona1.getedad()<<endl;

    cout<<endl;

    Persona1.setPersona("alex",21);

    cout<<"Nombre: "<<Persona1.getnombre()<<endl;
    cout<<"Edad: "<<Persona1.getedad()<<endl;

    cout<<endl;

    Persona1.setPersona("eder",22);

    cout<<"Nombre: "<<Persona1.getnombre()<<endl;
    cout<<"Edad: "<<Persona1.getedad()<<endl;

    return 0;
}
