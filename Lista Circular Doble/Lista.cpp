#include "Lista.h"

Lista::Lista()
{
	this->primero = NULL;
	this->ultimo = NULL;
}

bool Lista::estadoLista()
{
	if(this->primero==NULL && this->ultimo==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Lista::insertarInicio(int dato)
{
	Nodo *nuevoNuevo = new Nodo(dato);
	if(estadoLista()==true)
	{
		this->primero = nuevoNuevo;
		this->ultimo = nuevoNuevo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
	}
	else
	{
		nuevoNuevo->setSiguiente(this->primero);
		this->primero->setAnterior(nuevoNuevo);
		this->primero = nuevoNuevo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
	}
}

void Lista::insertarFinal(int dato)
{
	Nodo *nuevoNuevo = new Nodo(dato);
	if(estadoLista()==true)
	{
		this->primero = nuevoNuevo;
		this->ultimo = nuevoNuevo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
	}
	else
	{
		this->ultimo->setSiguiente(nuevoNuevo);
		nuevoNuevo->setAnterior(this->ultimo);
		this->ultimo = nuevoNuevo;
		this->ultimo->setSiguiente(this->primero);
		this->primero->setAnterior(this->ultimo);
	}
}

void Lista::eliminarInicio()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elementos que eliminar"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero = NULL;
			this->ultimo = NULL;
		}
		else
		{
			Nodo *aux = this->primero;
			this->primero = this->primero->getSiguiente();
			aux->setSiguiente(NULL);
			aux->setAnterior(NULL);
			this->primero->setAnterior(NULL);
			this->primero->setAnterior(this->ultimo);
			this->ultimo->setSiguiente(this->primero);
			delete aux;
		}
	}
}

void Lista::eliminarFinal()
{
	if(estadoLista()==true)
	{
		cout<<"No hay elementos que eliminar"<<endl;
	}
	else
	{
		if(this->primero==this->ultimo)
		{
			this->primero = NULL;
			this->ultimo = NULL;
		}
		else
		{
			Nodo *aux = this->ultimo;
			this->ultimo = this->ultimo->getAnterior();
			this->ultimo->setSiguiente(NULL);
			aux->setAnterior(NULL);
			aux->setSiguiente(NULL);
			this->primero->setAnterior(this->ultimo);
			this->ultimo->setSiguiente(this->primero);
			delete aux;
		}
	}
}

// retorno del primer elemento
Nodo * Lista::getInicio()
{
	Nodo *aux = this->primero;
	if(estadoLista()==true)
	{
		return NULL;
	}
	else
	{
		return aux;
	}
}

Lista::~Lista()
{
}
