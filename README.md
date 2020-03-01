# Lista enlazada sencilla en c++

A continuación se muestra un ejemplo sencillo de una implementación de una lista enlazada. 

## Acerca de
El programa crea un objeto ListaEnlazada que se encarga de controlar los nodos. Los nodos únicamente almacenan un nombre en este ejemplo. 

Actualmente solo implementa  los siguientes métodos:

- getSize(): devuelve el tamaño de la lista
- print(): se encarga de imprimir el nombre de todos los nodos de la lista. 
- append(String _nombre): crea un nodo de nombre _nombre. 

Los nodos solo guardan un nombre que es string y un puntero al siguiente nodo. Implementa los siguientes métodos:

- Nodo(String): constructor del nodo, establece el nombre y el puntero siguiente al NULL. 
- escribir(): imprime en consola la información del nodo. 
- setSiguiente(Nodo*): recibe como parametro el nodo siguiente y lo agrega a su siguiente. 

## Compilación

Para compilar basta con ejecutar 

- make

El Makefile tiene las siguientes opciones:

- all: compila todos los objetos y crea el ejecutable lista. 
- clean: elimina todos los objetos creados. 

## Ejecutar

Después de ejecutar el make se ejecuta en terminal con el comando:

- $ ./lista