#include <iostream>
#include <conio.h>
#include "Lista.h"
#include "Nodo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero;
	Lista listaCircular;
	int opMenu;	 	
	 do{
        system("cls");//para borrar en pantalla cuando repita el menu
        cout<<"--Menu--"<<endl;
        cout<<"1. Instear al Inicio "<<endl;
        cout<<"2. Insertar al Final "<<endl;
        cout<<"3. Eliminar al Inicio"<<endl;
        cout<<"4. Eliminar al Final"<<endl;
        cout<<"5. Imprimir Lista"<<endl;
        cout<<"6. Salir"<<endl<<endl;
        cout<<"INGRESE LA OPCION QUE DESEE REALIZAR: ";
        cin>>opMenu;

        switch (opMenu)
        {
            case 1:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaCircular.insertarInicio(numero);
                break;

            case 2:
            	cout<<"Ingrese un numero: ";
            	cin>>numero;
            	listaCircular.insertarFinal(numero);
            	break;
            	
            case 3:
            	listaCircular.eliminarInicio();
            	break;
            	
            case 4:
            	listaCircular.eliminarFinal();
            	break;
            	
            case 5:
				Nodo *auxPrimero = listaCircular.getInicio();
				int opMenu2;
				if(auxPrimero!=NULL){
					do{
						system("cls");
						cout<<"--Lista Circular--"<<endl;
				        cout<<"1. Siguiente "<<endl;
				        cout<<"2. Anterior  "<<endl;
				        cout<<"3. Salir "<<endl<<endl;
				        cout<<"<--- Nodo: "<<auxPrimero->getDato()<<"--->"<<endl;
				        cout<<"Opcion: ";
						cin>>opMenu2;
				        switch(opMenu2)
						{
							case 1:
								auxPrimero = auxPrimero->getSiguiente();
								break;
							case 2:
								auxPrimero = auxPrimero->getAnterior();
								break;
						}
					}while(opMenu2 != 3);
					break;	
				}
				else
				{
					cout<<"No hay elementos"<<endl;
					getch();
				}
				break;				 
        }

    }while(opMenu != 6);
	return 0;
}

