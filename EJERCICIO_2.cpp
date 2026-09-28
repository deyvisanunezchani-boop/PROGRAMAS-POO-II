// 2. Crean un ejemplo en el que se muestra la herencia y el polimorfismo
#include <iostream>
using namespace std;

    class Animal{
        private:
            string nombre;
        public:
            Animal(string);
            void hacerSonido();
            void mostrarnombre();
    };

    class Perro : public Animal{
        public:
            Perro(string);
            void hacerSonido();
    };

    class Gato : public Animal{
        public:
            Gato(string);
            void hacerSonido();
    };

    Animal::Animal(string _nombre){
        nombre = _nombre;
    }

    Perro::Perro(string _nombre) : Animal(_nombre){

    }

    Gato::Gato(string _nombre) : Animal(_nombre){

    }

    void Animal::mostrarnombre(){
        cout<<nombre;
    }

    void Animal::hacerSonido(){
        cout<<"el ";
        mostrarnombre();
        cout<<" hace un sonido"<<endl;
    }

    void Perro::hacerSonido(){
        cout<<"el ";
        mostrarnombre();
        cout<<" ladra"<<endl;
    }

    void Gato::hacerSonido(){
        cout<<"el ";
        mostrarnombre();
        cout<<" maulla"<<endl;
    }

int main(){

    Animal a1("Animal");
    Perro p1("firulais");
    Gato g1("michi");

    a1.hacerSonido();
    p1.hacerSonido();
    g1.hacerSonido();

    return 0;
}
