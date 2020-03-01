# compila todos los archivos de la lista enlazada
all: lista
lista: Main.o ListaEnlazada.o Nodo.o
	g++ Main.o ListaEnlazada.o Nodo.o -o lista
	./lista
Main.o: Main.cpp
	g++ -c Main.cpp
ListaEnlazada.o: ListaEnlazada.cpp
	g++ -c ListaEnlazada.cpp
Nodo.o: Nodo.cpp
	g++ -c Nodo.cpp
clean:
	rm -rf *o lista
