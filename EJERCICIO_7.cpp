/*Crean un ejemplo en el sólo se puede modificar y leer los valores de los 
datos de un objeto a través de métodos de interfaz (hay encapsulamiento).*/
#include <iostream>
using namespace std;

    class persona{
        private:
            string nombre;
            int edad;
        public:
            persona();
            void setpersona(string,int);
            string getnombre();
            int getedad();
    };

    persona::persona(){

    }

    void persona::setpersona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    string persona::getnombre(){
        return nombre;
    }

    int persona::getedad(){
        return edad;
    }

int main(){

    persona persona1;

    persona1.setpersona("rodrigo",20);

    cout<<"Nombre: "<<persona1.getnombre()<<endl;
    cout<<"Edad: "<<persona1.getedad()<<endl;

    cout<<endl;

    persona1.setpersona("alex",21);

    cout<<"Nombre: "<<persona1.getnombre()<<endl;
    cout<<"Edad: "<<persona1.getedad()<<endl;

    cout<<endl;

    persona1.setpersona("eder",22);

    cout<<"Nombre: "<<persona1.getnombre()<<endl;
    cout<<"Edad: "<<persona1.getedad()<<endl;

    return 0;
}
