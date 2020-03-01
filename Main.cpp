#include <iostream>
#include <stdlib.h>
#include "ListaEnlazada.hpp"

using namespace std;

int main(){

    std::cout << " Hola Mundo" << " \n \n \n ";

    ListaEnlazada lista = ListaEnlazada();

    std::cout << "Tamaño lista: " << lista.getSize() << "\n \n";

    lista.append("Oliver");
    std::cout << "Tamaño lista: " << lista.getSize() << "\n \n";
    lista.append("ernesto");
    std::cout << "Tamaño lista: " << lista.getSize() << "\n \n";
    lista.append("marcos");
    std::cout << "Tamaño lista: " << lista.getSize() << "\n \n";


    lista.print();



/*
    odo n1 = Nodo("oliver");
    Nodo n2("ernesto");
    Nodo n3 = Nodo("marcos");
    n1.setSiguiente(&n2);
    n1.setSiguiente(&n3);
    n1.setSiguiente(new Nodo("Maria"));
    n1.setSiguiente(new Nodo("Ana"));
    n1.escribir();
    */

    



    return 0;

}