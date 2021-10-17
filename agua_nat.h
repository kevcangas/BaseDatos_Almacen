#ifndef __AGUA_NAT_H_  
#define _AGUA_NAT_H_



#include "cbebidas.h"

class agua_nat:public cbebidas{    //Subclase
      public:
          int sodio;
      
      public:
          agua_nat(){};
          void agregar(int x);
          void eliminar();
          void mostrar();
};

void agua_nat::agregar(int x){      //Metodo agregar de la subclase
     system("cls");
	 cout<<"Dame la marca"<<endl;
     cin>>marca;
     
     cout<<"Dame los mililitros"<<endl;
     cin>>mililitros;
     
     cout<<"Dame el precio"<<endl;
     cin>>precio;
     
     cout<<"Tiene sodio? (si=1 no=0)"<<endl;
     cin>>sodio;
     
     ID=x;
     
     system("cls");
};

void agua_nat::eliminar(){          //Metodo eliminar de la subclase
     ID=0;
     strcpy(marca," ");
     sodio=0;
     mililitros=0;
     precio=0;
};

void agua_nat::mostrar(){           //Metodo mostrar de la subclase
	cout<<"Marca: "<<marca<<endl;
	cout<<"Mililitros: "<<mililitros<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Contiene sodio?: ";
	if(sodio==1) cout<<"Si"<<endl;
	else cout<<"No"<<endl;
	cout<<"ID: "<<ID<<endl;
};

#endif
