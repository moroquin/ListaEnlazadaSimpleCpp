#include <iostream>


class Nodo{
    private:
        std::string nombre;
        Nodo *siguiente;

    public:
        Nodo(std::string);
        void escribir();
        void setSiguiente(Nodo*);
};