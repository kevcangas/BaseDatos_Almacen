#ifndef __AGUA_MIN_H_  
#define _AGUA_MIN_H_


#include "agua_nat.h"

class agua_min:public cbebidas{    //Subclase
      public:
          int procedencia;
          
      public:
          agua_min(){};
          void agregar(int x);
          void eliminar();
          void mostrar();
};  

void agua_min::agregar(int x){  //Metodo agregar de la subclase
     system("cls");
	 cout<<"Dame la marca"<<endl;
     cin>>marca;
     
     cout<<"Dame los mililitros"<<endl;
     cin>>mililitros;
     
     cout<<"Dame el precio"<<endl;
     cin>>precio;
     
     cout<<"Procede de un manantial? (si=1 no=0)"<<endl;
     cin>>procedencia;
     
     ID=x;
	 
     system("cls");
};

void agua_min::eliminar(){      //Metodo eliminar de la subclase
     ID=0;
     strcpy(marca," ");
     procedencia=0;
     mililitros=0;
     precio=0;
};

void agua_min::mostrar(){         //Metodo mostrar de la subclase
	cout<<"Marca: "<<marca<<endl;
	cout<<"Mililitros: "<<mililitros<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Procede de un manantial?: ";
	if(procedencia==1) cout<<"Si"<<endl;
	else cout<<"No"<<endl;
	cout<<"ID: "<<ID<<endl;
};

#endif
