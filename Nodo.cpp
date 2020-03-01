#include "Nodo.hpp"

Nodo::Nodo(std::string _nombre){
    nombre = _nombre;
    siguiente = NULL;
}

void Nodo::escribir(){
    std::cout<< " Nodo: " << nombre << " \n";
    if (siguiente != NULL)
        siguiente->escribir();
    
}

void Nodo::setSiguiente(Nodo* _siguiente){
    if (siguiente != NULL)
        siguiente->setSiguiente(_siguiente);
    else  
        siguiente = _siguiente;
}