#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista
{
	private:
		Nodo *primero;
		Nodo *ultimo;
	public:
		Lista();
		bool estadoLista();
		void insertarInicio(int);
		void insertarFinal(int);
		void eliminarInicio();
		void eliminarFinal();
		Nodo * getInicio();
		~Lista();
	protected:
};

#endif
