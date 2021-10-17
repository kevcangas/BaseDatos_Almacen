#ifndef __CALMACEN_H_  
#define _CALMACEN_H_

#include "refresco.h"
#include "funciones.h"

using namespace std;



class calmacen{               //Clase almacen
      public:
         float sum_total;
         float sum_agua_nat;
         float sum_agua_min;
         float sum_refresco;
         int asig;
         agua_nat v1[5];
         agua_min v2[5];
         refresco v3[5];
         int aux;
         
      public:
      	 calmacen();
         int asig_id();
         void suma_tot();
         void suma_parcial();
         void menu();
};
 
calmacen::calmacen(){         //Constructor de la clase
     sum_agua_nat=0;
     sum_agua_min=0;
     sum_refresco=0;
     sum_total=0;
     asig=0;
     aux=0;
};

void calmacen::suma_parcial(){   
    int a=0,b=0,c=0;
	for(int i=0;i<5;i++){      //Hace una suma por cada lugar ocupado
    	if(v1[i].mililitros!=0) a+=1;
    	if(v2[i].mililitros!=0) b+=1;
    	if(v3[i].mililitros!=0) c+=1;
    }
    sum_agua_nat=a;
    sum_agua_min=b;
    sum_refresco=c;
   
	cout<<"Suma de agua natural: "<<sum_agua_nat<<endl;  //Muestra la cantidad de agua nat
    cout<<"Suma de agua mineral: "<<sum_agua_min<<endl;  //Muestra la cantidad de agua min
    cout<<"Suma de refresco: "<<sum_refresco<<endl;      //Muestra la cantidad de refresco
};

void calmacen::suma_tot(){     
	int a=0,b=0,c=0;
	for(int i=0;i<5;i++){      //Funciona igual que el anterior
    	if(v1[i].mililitros!=0) a+=1;
    	if(v2[i].mililitros!=0) b+=1;
    	if(v3[i].mililitros!=0) c+=1;
    }
    sum_agua_nat=a;
    sum_agua_min=b;
    sum_refresco=c;
    
    sum_total=sum_agua_nat+sum_agua_min+sum_refresco;  //Suma todos los productos
    cout<<"Suma total de los productos: "<<sum_total<<endl;  //muestra la cantidad total de productos
};

int calmacen::asig_id(){     //Crea el id de los productos 
	asig=asig+1;
	return asig;
};

void calmacen::menu(){   //En este metodo se utilizan funciones que se enceuntran en el archivo
	char opc;            //funciones para evitar el aumento del numero de lineas en este archivo
	int a;
	do{
		cout<<"Seleccione una de las bebidas"<<endl;   //Menu
		cout<<"1.Agua nat"<<endl;
		cout<<"2.Agua min"<<endl;
		cout<<"3.Refresco"<<endl;
		cout<<"4.Eliminar"<<endl;
		cout<<"5.Suma parcial de los productos"<<endl;
		cout<<"6.Suma total de los productos"<<endl;
		cout<<"7.Salir"<<endl;
		cin>>opc;
		
		system("cls");
		
		switch(opc){                    //Switch del menu
			case '1': opcion1(v1,aux); 
			          if(aux==1){
					      if(ob_slot1(v1)==5){            //Si la funcion ob_slot regresa un 5 
			              cout<<"Espacio lleno"<<endl;   //imprime que los espacios estan llenos
		                  system("pause");
                          system("cls");
				          }
		                  else v1[ob_slot1(v1)].agregar(asig_id()); //Sí no, agrega un producto en el espacio vacio
					  }break;                                       //Llama varias funciones 
					  
			case '2': opcion2(v2,aux); 
			          if(aux==1){
					      if(ob_slot2(v2)==5){            //Si la funcion ob_slot regresa un 5 
			              cout<<"Espacio lleno"<<endl;   //imprime que los espacios estan llenos
		                  system("pause");
                          system("cls");
				          }
		                  else v2[ob_slot2(v2)].agregar(asig_id()); //Sí no, agrega un producto en el espacio vacio
					  }break;
					  
			case '3': opcion3(v3,aux); 
			          if(aux==1){
					      if(ob_slot3(v3)==5){            //Si la funcion ob_slot regresa un 5 
			              cout<<"Espacio lleno"<<endl;   //imprime que los espacios estan llenos
		                  system("pause");
                          system("cls");
				          }
		                  else v2[ob_slot3(v3)].agregar(asig_id()); //Sí no, agrega un producto en el espacio vacio
					  }break;
			
			case '4': cout<<"Seleccione el ID del objeto a borrar"<<endl;
			          int a;
			          cin>>a;
					  for(int i=0;i<5;i++){
			              if(v1[i].ID==a) v1[i].eliminar();
			              if(v2[i].ID==a) v2[i].eliminar();
			              if(v3[i].ID==a) v3[i].eliminar();
					  }
				      system("pause"); system("cls");
					  break;
			
					  
		    case '5': suma_parcial();                          //Llama el metodo suma_parcial 
			        system("pause"); system("cls"); break;
		    
			case '6': suma_tot();                             //Llama el metodo suma_tot
			        system("pause"); system("cls"); break;
		    
			case '7': break;
		    
			default: cout<<"No es una opcion"<<endl; 
		             system("pause"); system("cls"); 
					 break;    
	    }
	}while(opc!='7');
	
};




#endif
