#include "Includes.h"
#include <fstream>
#include <cstring>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>

using namespace std;

string getHora();
string getFecha();
string getMicrosoft(int);
string getSony(int);
string getNintendo(int);
int userOption(Usuario*);
int menuAdmin();
int consolasOption();
int modelosNintendo();
int modelosSony();
int modelosMicrosoft();
int numSerie(vector<int>);
string getSerie(string,int);

int main(){
	Usuario* admin=new Administrador("admin","admin");
	vector<Consola*> consoles;
	vector<Videojuego> games;
	vector<int> series;
	int menu_principal=userOption(admin);
	do{
	switch (menu_principal){
		case 1:{
			cout<<"----------Administrador----------\n";
			int menu_admin=menuAdmin();
			do{
			switch(menu_admin){
				case 1:{
					string modelo, estado,serie;
					double precio;
					int ano;
					switch (consolasOption()){
						case 1:{
							modelo=getSony(modelosSony());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							int ser=numSerie(series);
							series.push_back(ser);
							serie=getSerie("SON",ser);
							Consola* temp=new Sony(modelo,estado,serie,precio,ano);
							consoles.push_back(temp);
							delete temp;
							cout<<consoles.at(0)->getSerie();
							break;
						}
						case 2:{
							
							modelo=getNintendo(modelosNintendo());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							int ser=numSerie(series);
							series.push_back(ser);
							serie=getSerie("NIN",ser);
							Consola* temp=new Nintendo(modelo,estado,serie,precio,ano);
							delete temp;
							consoles.push_back(temp);
							break;
						}
						case 3:{
							modelo=getMicrosoft(modelosMicrosoft());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							int ser=numSerie(series);
							series.push_back(ser);
							serie=getSerie("MIC",ser);
							Consola* temp=new Microsoft(modelo,estado,serie,precio,ano);
							delete temp;
							consoles.push_back(temp);
							break;
							break;
						}
					}
					break;
				}
			}menu_admin=menuAdmin();
		}while(menu_admin!=7);
			break;
		}
		case 2:{
			cout<<"------------Vendedor-------------\n";
			break;
		}
		case 3:{
			cout<<"------Saliendo del Sistema-------\n";
			break;
		}
	}
	}while(menu_principal!=3);
	return 0;
}
string getSerie(string cad, int num){
	stringstream serie;
	serie<<cad<<"-"<<num;
	string retval=serie.str();
	return retval;
}
int numSerie(vector<int> vec){
	srand(time(NULL));
	int num;
	bool repetido=false;
	do{
		num=1+rand()%(10001-1);
		for (int i = 0; i < vec.size(); ++i){
			if(vec.at(i)==num){
				repetido=true;
			}
		}
	}while(repetido==true);
	return num;
}
int modelosMicrosoft(){
	int opc;
	do{
		cout<<"\n\n----Microsoft----\n";
		cout<<"1) Xbox\n"<<
			  "2) Xbox one\n"<<
			  "3) Xbox 360\n"<<
			  "Ingrese Modelo: ";
		cin>>opc;
		if(opc<1 || opc>3){
			cout<<"Opcion no encotrada!";
		}else{
			return opc;
		}
	}while(opc<1 || opc>3);
}
int modelosNintendo(){
	int opc;
	do{
		cout<<"\n\n--------------Nintendo-------------\n";
		cout<<"1)  Nintendo Entertainment System\n"<<
    	      "2)  Super Nintendo Entertainment System\n"<<
			  "3)  Nintendo 64\n"<<
		      "4)  Nintendo Gamecube\n"<<
			  "5)  Nintendo Wii\n"<<
			  "6)  Nintendo Wii U\n"<<
			  "7)  Nintendo Switch\n"<<
    	      "8)  Gameboy\n"<<
    	      "9)  Gameboy Colors\n"<<
   	   	      "10) Gameboy Advance\n"<<
   	          "11) Nintendo DS\n"<<
   	          "12) Nintendo DSi\n"<<
   	          "13) Nintendo 3DS\n"<<
   	          "14) Nintendo New 3DS\n"<<
   	           "Ingrese Modelo: ";
   	    cin>>opc;
   	    if(opc<1 || opc>14){
   	    	cout<<"Opcion no encontrada!";
   	    }else{
   	    	return opc;
   	    }
   	}while(opc<1 || opc>14);
}
int modelosSony(){
	int opc;
	do{
		cout<<"\n\n---------Sony--------\n";
		cout<<"1) Play Station 1\n"<<
			  "2) Play Station 2\n"<<
			  "3) Play Station 3\n"<<
    	      "4) Play Station 4\n"<<
    	      "5) PSP\n"<<
   		      "6) PS Vita\n"<<
    	      "Ingrese Modelo: ";
    	cin>>opc;
    	if(opc<1 || opc>6){
    		cout<<"Opcion no encontrada!\n";
    	}else{
    		return opc;
    	}
    }while(opc<1 || opc>6);
}
int consolasOption(){
	int opc;
	do{	
		cout<<"\n\n-------Consolas-----\n";
		cout<<"1) Sony\n"<<
			  "2) Nintendo\n"<<
			  "3) Microsoft\n"<<
			  "Ingrese tipo de consola: ";
		cin>>opc;
		if(opc<1 || opc>3){
			cout<<"Opcion no encontrada!\n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>3);	
}
int menuAdmin(){
	int opc;
	do{
		cout<<"1) Agregar Consola\n"<<
		 	  "2) Agregar VideoJuegos\n"<<
		  	  "3) Listar Consolas\n"<<
		 	  "4) Listar VideoJuegos\n"<<
		      "5) Eliminar Consolas\n"<<
		      "6) Eliminar VideoJuegos\n"<<
		      "7) Salir de Administrador\n"<<
		      "Ingrese Opcion: ";
		cin>>opc;
	 	if(opc<1 || opc>7){
	   		cout<<"Opcion no encontrada!\n";
	 	}else{
	 		return opc;
	 	}
	}while(opc<1 || opc>7);


}
int userOption(Usuario* admin){
	cout<<endl;
	string usuario_name;
	string password;
	int opc;
	bool cont=false;
	do{
		cout<<"1) Administrador\n"<< 
			  "2) Vendedor\n"<< 
			  "3) Salir\n"
			  "Ingrese Opcion: ";
		cin>>opc;
		if(opc==1 || opc==2 || opc==3){
			if(opc==1){
				cout<<"\n----Login----\n";
				cout<<"Username: ";
				cin>>usuario_name;
				cout<<"Password: ";
				cin>>password;
				if(((static_cast<Administrador*>(admin))->getPassword())==password && admin->getNombre()==usuario_name){
					return 1;
				}else{
					cout<<"Usuario incorrecto!"<<endl;
				}
			}else{
				if(opc==2){
					return 2;
				}else{
					return 3;
				}
			}
			
		}else{
			cout<<"Opcion no encontrada\n¡Intente de nuevo!"<<endl;

		}
	}while(cont==false);

}

string getHora(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec;
	string hora=hour.str();
	return hora;
}
string getFecha(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	int year = 1900 + time->tm_year;
	stringstream fecha;
	fecha<<time->tm_mday<<"/"<<(time->tm_mon+1)<<"/"<<year;
	string date=fecha.str();
	return date;
}
string getMicrosoft(int n){
	switch (n){
		case 1: 
			return "xbox";
			break;
		case 2: 
			return "xbox 360";
			break;
		case 3: 
			return "xbox One";
			break;
  		default: 	
  			return NULL;
  			break;
	}		
}
string getSony(int n){
	switch (n){
		case 1: 
			return "Play Station 1";
			break;
		case 2: 
			return "Play Station 2";
			break;	
		case 3: 
			return "Play Station 3";
			break;
		case 4: 
			return "Play Station 4";
			break;
		case 5: 
			return "PSP";
			break;
		case 6: 
			return "PS Vita";
			break;
		default: 
			return NULL;
	}
}
string getNintendo(int n){
	switch (n){
		case 1:
			return "Nintendo Entertainment System";
			break;
		case 2:
			return "Super Nintendo Entertainment System";
			break;
		case 3:
			return "Nintendo 64";
			break;
		case 4:
			return "Nintendo GameCube";
			break;
		case 5:
			return "Nintendo Wii";
			break;
		case 6:
			return "Nintendo Wii U";
			break;
		case 7:
			return "Nitendo Switch";
			break;
		case 8:
			return "Gameboy";
			break;
		case 9:
			return "Gameboy Colors";
			break;
		case 10:
			return "Gameboy Advance";
			break;
		case 11:
			return "Nintendo DS";
			break;
		case 12:
			return "Nintendo DSi";
			break;
		case 13:
			return "Nintendo 3DS";
			break;	
		case 14:
			return "Nintendo New 3DS";
			break;
		default:
			return NULL;
			break;



	}
}