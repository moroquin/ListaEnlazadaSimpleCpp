#include <iostream>
#include "Nodo.hpp"


class ListaEnlazada{
    private:
        int size;
        Nodo* root;

    public:
        ListaEnlazada();
        void append(std::string);
        void print();
        int getSize();
};