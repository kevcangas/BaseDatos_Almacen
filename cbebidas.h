#ifndef __CBEBIDAS_H_  
#define _CBEBIDAS_H_

#include <iostream>
#include <string.h>

using namespace std;

class cbebidas{                //CLASE MADRE
      public:                  //Atributos
          int ID;
          char marca[20];
          float mililitros;
          float precio;
           
      public:                  //Metodos
          cbebidas();
};

cbebidas::cbebidas(){         //Inicializa los atributos 
     strcpy(marca," ");
	 ID=0;
     mililitros=0;
     precio=0;
};

#endif
