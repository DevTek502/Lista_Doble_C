#include "Nodo.h"

Nodo::Nodo(int dato)
{
	this->dato = dato;
	this->siguiente = NULL;
	this->anterior = NULL;
}

void Nodo::setDato(int dato)
{
	this->dato = dato;
}

void Nodo::setSiguiente(Nodo *siguiente)
{
	this->siguiente = siguiente;
}

void Nodo::setAnterior(Nodo *anterior)
{
	this->anterior = anterior;
}

int Nodo::getDato()
{
	return dato;
}

Nodo * Nodo::getSiguiente()
{
	return siguiente;
}

Nodo * Nodo::getAnterior()
{
	return anterior;
}

Nodo::~Nodo()
{
}
