#ifndef __REFRESCO_H_  
#define _REFRESCO_H_


#include "agua_min.h"

class refresco:public cbebidas{   //Subclase
      public:
          int cantidad_az;
      
      public:
          refresco();
          void agregar(int x);
          void eliminar();
          void mostrar();
};

refresco::refresco(){
	cantidad_az=0;
};

void refresco::agregar(int x){   //Metodo agregar de la subclase
     system("cls");
	 cout<<"Dame la marca"<<endl;
     cin>>marca;
     
     cout<<"Dame los mililitros"<<endl;
     cin>>mililitros;
     
     cout<<"Dame el precio"<<endl;
     cin>>precio;
     
     cout<<"Cantidad de azucar?"<<endl;
     cin>>cantidad_az;
     
     ID=x;

     system("cls");
};

void refresco::eliminar(){   //Metodo eliminar de la subclase
     ID=0;
     strcpy(marca," ");
     cantidad_az=0;
     mililitros=0;
     precio=0;
};

void refresco::mostrar(){     //Metodo mostrar de la subclase
	cout<<"Marca: "<<marca<<endl;
	cout<<"Mililitros: "<<mililitros<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Cantidad de azucar: "<<cantidad_az<<endl;
	cout<<"ID: "<<ID<<endl;
};

#endif
