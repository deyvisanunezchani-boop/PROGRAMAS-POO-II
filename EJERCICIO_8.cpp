/*Sobre coherencia, consistencia y el principio de “Una sola responsabilidad”. 
Crean un ejemplo que muestre el “God Class” o “God Object”.*/
#include <iostream>
using namespace std;

    class persona{
        private:
            string nombre;
            int edad;
        public:
            persona(string,int);
            void mostrarDatos();
            void trabajar();
            void guardarDatos();
            void correr();
            void llegar();
    };

    persona::persona(string _nombre,int _edad){
        nombre = _nombre;
        edad = _edad;
    }

    void persona::mostrarDatos(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
    }

    void persona::trabajar(){
        cout<<nombre<<" en este momento esta trabajando"<<endl;
    }

    void persona::guardarDatos(){
        cout<<"los datos de "<<nombre<<" se estan guardando"<<endl;
    }

    void persona::correr(){
        cout<<nombre<<" esta corriendo hacia la oficina "<<endl;
    }

    void persona::llegar(){
        cout<<nombre<<" llego a la oficina antes de lo previsto"<<endl;
    }

int main(){

    persona p1("Rodrigo",20);

    p1.mostrarDatos();
    p1.trabajar();
    p1.guardarDatos();
    p1.correr();
    p1.llegar();

    return 0;
}