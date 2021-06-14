#ifndef NODO_H
#define NODO_H

#include <iostream>

class Nodo
{
	private:
		int dato;
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo(int);
		void setDato(int);
		void setSiguiente(Nodo *);
		void setAnterior(Nodo *);
		int getDato();
		Nodo *getSiguiente();
		Nodo *getAnterior();
		~Nodo();
	protected:
};

#endif
