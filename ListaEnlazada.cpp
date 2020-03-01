#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada(){
    size = 0;
    root = NULL;
}

void ListaEnlazada::print(){
    std::cout<< "INICIANDO \n \n \n ";
    if (root != NULL)
        root->escribir();

    std::cout<< "FINALIZANDO \n \n \n";
    
}

void ListaEnlazada::append(std::string _nombre){

    if (root != NULL)
        root->setSiguiente(new Nodo(_nombre));
    else  
        root = new Nodo(_nombre);

    size++;
}

int ListaEnlazada::getSize(){
    return size;
}