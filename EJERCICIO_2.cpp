// 2. Crean un ejemplo en el que se muestra la herencia y el polimorfismo
#include <iostream>
using namespace std;

    class animal{
        private:
            string nombre;
        public:
            animal(string);
            void hacerSonido();
    };

    class perro : public animal{
        public:
            perro(string);
            void hacerSonido();
    };

    class gato : public animal{
        public:
            gato(string);
            void hacerSonido();
    };

    animal::animal(string _nombre){
        nombre = _nombre;
    }

    perro::perro(string _nombre) : animal(_nombre){

    }

    gato::gato(string _nombre) : animal(_nombre){

    }

    void animal::hacerSonido(){
        cout<<"el animal hace un sonido"<<endl;
    }

    void perro::hacerSonido(){
        cout<<"el perro ladra"<<endl;
    }

    void gato::hacerSonido(){
        cout<<"el gato maulla"<<endl;
    }

int main(){

    animal a1("animal");
    perro p1("firulais");
    gato g1("michi");

    a1.hacerSonido();
    p1.hacerSonido();
    g1.hacerSonido();

    return 0;
}
