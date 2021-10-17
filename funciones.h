//Funciones que son ocupadas en el apartado indicado en la clase calmacen 

void espacios1(agua_nat x[5]){    //Esta funcion indica que espacios estan vacios 
	cout<<"Espacios en el estante (1=ocupado 0=vacio): ";    // en el almacen de aguas naturales
	for(int i=0;i<5;i++){
    	if(x[i].mililitros==0) cout<<"0";
    	else cout<<"1";
    }
    cout<<endl;
}

void espacios2(agua_min x[5]){      //Esta funcion indica que espacios estan vacios 
	cout<<"Espacios en el estante (1=ocupado 0=vacio): ";    // en el almacen de aguas minerales
	for(int i=0;i<5;i++){
    	if(x[i].mililitros==0) cout<<"0";
    	else cout<<"1";
    }
    cout<<endl;
}

void espacios3(refresco x[5]){      //Esta funcion indica que espacios estan vacios 
	cout<<"Espacios en el estante (1=ocupado 0=vacio): ";    // en el almacen de refrescos
	for(int i=0;i<5;i++){
    	if(x[i].mililitros==0) cout<<"0";
    	else cout<<"1";
    }
    cout<<endl;
}

int ob_slot1(agua_nat x[5]){        //Obtiene el numero del espacio vacio en el 
    for(int i=0;i<=5;i++){            //almacen de aguas naturales 
    	if(x[i].mililitros==0) return i;
    	else if(i==5) return 5;     //Retorna 5 si ya todos los espacios estan llenos
    }
}

int ob_slot2(agua_min x[5]){       //Obtiene el numero del espacio vacio en el 
    for(int i=0;i<5;i++){            //almacen de aguas minerales
    	if(x[i].mililitros==0) return i;
    	else if(i==5) return 5;     //Retorna 5 si ya todos los espacios estan llenos
    }
}

int ob_slot3(refresco x[5]){      //Obtiene el numero del espacio vacio en el 
    for(int i=0;i<5;i++){           //almacen de refrescos
    	if(x[i].mililitros==0) return i;
    	else if(i==5) return 5;     //Retorna 5 si ya todos los espacios estan llenos
    }
}

void opcion1(agua_nat x[5],int& ID){           //Funcion para seleccionar
    char opc;
    int b; 
	cout<<"Seleccione una de las siguientes opciones"<<endl;
	cout<<"1.Agregar"<<endl;
	cout<<"2.Mostrar"<<endl;
	cout<<"3.Regresar"<<endl;
	cin>>opc;

	switch(opc){
		case '1': ID=1; 
				break;
		case '2': ID=0; cout<<"Seleccione una posicion (1-5)"<<endl;   //Muestra el producto que se 
		        cin>>b;                                          //encuentre en el espacio que seleccione
		        b=b-1;
				x[b].mostrar();                                  //el usuario 
				espacios1(x);
				system("pause"); system("cls"); break;
	    case '3':  ID=0; system("pause"); system("cls"); break;
		default: ID=0;
		         cout<<"No es una opcion"<<endl;             
		         system("pause"); system("cls"); break;
	}	
}

void opcion2(agua_min x[5],int& ID){           //Funcion para seleccionar
    char opc;                                       //tiene el mismo funcionamiento que el anterior
    int b;                                          //solo que lo realiza en la bebida agua mineral
	cout<<"Seleccione una de las siguientes opciones"<<endl;
	cout<<"1.Agregar"<<endl;
	cout<<"2.Mostrar"<<endl;
	cout<<"3.Regresar"<<endl;
	cin>>opc;

	switch(opc){
		case '1': ID=1; 
				break;
		case '2': ID=0; cout<<"Seleccione una posicion (1-5)"<<endl;
		        cin>>b;
		        b=b-1;
		        x[b].mostrar();
				espacios2(x); 
				system("pause"); system("cls");break;
		case '3':  ID=0; system("pause"); system("cls");break;
		default: ID=0;
		         cout<<"No es una opcion"<<endl;
		         system("pause"); system("cls"); break;
	}
}

void opcion3(refresco x[5],int& ID){           //Funcion para seleccionar
    char opc;                                       //tiene el mismo funcionamiento que el anterior
    int b;                                           //solo que lo realiza en la bebida agua mineral
	cout<<"Seleccione una de las siguientes opciones"<<endl;
	cout<<"1.Agregar"<<endl;
	cout<<"2.Mostrar"<<endl;
	cout<<"3.Regresar"<<endl;
	cin>>opc;

	switch(opc){
		case '1': ID=1;  
				break;
		case '2': ID=0; cout<<"Seleccione una posicion (1-5)"<<endl;
		        cin>>b;
		        b=b-1;
		        x[b].mostrar(); 
		        espacios3(x);
				system("pause"); system("cls"); break;
		case '3':  ID=0; system("pause"); system("cls"); break;
		default: ID=0;
		         cout<<"No es una opcion"<<endl;
		         system("pause"); system("cls"); break;
	}
	
}
