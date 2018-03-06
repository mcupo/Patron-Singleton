#include <iostream>

using namespace std;

class Singleton

{

    private:

        static Singleton* _instancia;

    protected:

        Singleton(){}

    public:

        static Singleton* Instancia();

        void mostrarMensaje(){cout<<"Unica instancia de singleton\n";}

};

Singleton* Singleton::_instancia = 0;

Singleton* Singleton::Instancia()

{

    if(_instancia==0)

    {

        _instancia = new Singleton;

    }

    return _instancia;

}

void main()

{

    /*

    No me deja instanciarlo

    Singleton miSingleton;

    */

    Singleton* miSingleton;

    miSingleton=Singleton::Instancia();

    miSingleton->mostrarMensaje();

    cin.get();

}
