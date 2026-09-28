/*Crean un ejemplo en el que se pueden crear 3 objetos con diferentes constructores, 
debe considerar al constructor por defecto.*/
#include <iostream>
using namespace std;

    class persona{
        private:
            string nombre;
            int edad;
        public:
            persona();
            persona(string);
            persona(string,int);
            void mostrarpersona();
    };

    persona::persona(){
        nombre = "sin nombre";
        edad = 0;
    }

    persona::persona(string _nombre){
        nombre = _nombre;
        edad = 0;
    }

    persona::persona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    void persona::mostrarpersona(){
        cout<<"nombre: "<<nombre<<endl;
        cout<<"edad: "<<edad<<endl;
    }

int main(){

    persona p1;
    persona p2("rodrigo");
    persona p3("alex",20);

    p1.mostrarpersona();

    cout<<endl;

    p2.mostrarpersona();

    cout<<endl;

    p3.mostrarpersona();

    return 0;
}
