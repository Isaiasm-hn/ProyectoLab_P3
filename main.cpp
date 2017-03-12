#include "Consola.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Vendedor.h"
#include "Videojuego.h"
#include "Microsoft.h"
#include "Microsoftgame.h"
#include "Nintendogame.h"
#include "Sonygame.h"
#include "Bandaigame.h"
#include "Konamigame.h"
#include "SquareEnixgame.h"
#include "ElectronicArtgame.h"
#include "Segagame.h"
#include "Ubisoftgame.h"
#include <ctime>
#include <vector>
#include <sstream>
#include <iostream>
#include <string>
#include "DataBase.h"
#include <fstream>
#include <cstring>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include "Venta.h"


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
bool validateSerie(vector<Consola*>,vector<Videojuego*>, int);
int getVideojuegos();
int dealerOption();
int ventaOption();
void ListarConsolas(vector<Consola*>);
int ventaGames();
Videojuego* GameCopy(Videojuego*,string);




int main(){
	Usuario* admin=new Administrador("admin","admin");
	vector<Consola*> consoles;
	vector<Videojuego*> games;
	

	int menu_principal=userOption(admin);

	do{
	switch (menu_principal){
		case 1:{
			cin.ignore();
			int menu_admin=menuAdmin();
			bool cont=true;
			while(menu_admin!=9){
			switch(menu_admin){
				case 1:{
					string modelo, estado;
					double precio;
					int ano,serie;
					switch (consolasOption()){//Inicio agregar Consolas
						case 1:{
							cin.ignore();
							modelo=getSony(modelosSony());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Serie: ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							Consola* temp=new Sony(modelo,estado,serie,precio,ano);
							consoles.push_back(temp);
							
							break;
						}
						case 2:{
							cin.ignore();
							modelo=getNintendo(modelosNintendo());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Serie: ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							Consola* temp=new Nintendo(modelo,estado,serie,precio,ano);
							
							consoles.push_back(temp);
							break;
						}
						case 3:{
							cin.ignore();
							modelo=getMicrosoft(modelosMicrosoft());
							cout<<modelo;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Serie: ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							Consola* temp=new Microsoft(modelo,estado,serie,precio,ano);
							
							consoles.push_back(temp);
							break;
						}
					}
					break;
				}//Fin agregar Consolas
				case 2:{
					cin.ignore();
					string nombre,genero,estado;
					int ano,players,serie;
					double precio;
					switch (getVideojuegos()){//inicio agregar Videojuegos
						case 1:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Microsoftgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
						case 2:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Sonygame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
						case 3:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Nintendogame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
						case 4:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Bandaigame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
						case 5:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Konamigame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
						case 6:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new SquareEnixgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							break;
						}
						case 7:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new ElectronicArtgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
						
							break;
						}
						case 8:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);;
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie invalida!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Segagame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
						
							break;
						}
						case 9:{
							cout<<"Nombre: ";
							cin.ignore();
							getline(cin,nombre);
							cout<<"Ano: ";
							cin>>ano;
							cout<<"Jugadores: ";
							cin>>players;
							cout<<"Genero: ";
							cin>>genero;
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Serie: ";
							cin>>serie;
								while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!\n";
								cout<<"Serie: ";
								cin>>serie;
							}
							cout<<"Precio: ";
							cin>>precio;
							Videojuego* temp=new Ubisoftgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							break;
						}
					}
					break;
				}//Fin agregar VideoJuegos
				case 3:{//agregar consoloas por lote
					cin.ignore();
					int cant;
					cout<<"Cantidad de consolas a agregar: ";
					cin>>cant;
					string modelo, estado;
					double precio;
					int ano,serie;
					switch (consolasOption()){
						case 1:{
							cin.ignore();
							modelo=getSony(modelosSony());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							for (int i = 0; i < cant; ++i){
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
								while(!validateSerie(consoles,games,serie)){
									cout<<"Serie invalida!\n";
									cout<<"Serie ("<<(i+1)<<"): ";
									cin>>serie;
								}
								Consola* temp=new Sony(modelo,estado,serie,precio,ano);
								consoles.push_back(temp);
								
							}
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
							for (int i = 0; i < cant; ++i){
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
								while(!validateSerie(consoles,games,serie)){
									cout<<"Serie Duplicada!\n";
									cout<<"Serie ("<<(i+1)<<"): ";
									cin>>serie;
								}
								Consola* temp=new Nintendo(modelo,estado,serie,precio,ano);
								consoles.push_back(temp);
								
							}
							break;
						}
						case 3:{
							cin.ignore();
							modelo=getMicrosoft(modelosMicrosoft());
							cout<<"Estado: ";
							cin>>estado;
							cout<<"Precio: ";
							cin>>precio;
							cout<<"Ano: ";
							cin>>ano;
							for (int i = 0; i < cant; ++i){
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
								while(!validateSerie(consoles,games,serie)){
									cout<<"Serie Duplicada!\n";
									cout<<"Serie ("<<(i+1)<<"): ";
									cin>>serie;
								}
								Consola* temp=new Microsoft(modelo,estado,serie,precio,ano);
								consoles.push_back(temp);
								
							}
						}
					} 					
					break;
				}//fin agregar por lote consolas
				case 4:{//INICIO AGREGAR VIDEOJUEGOS POR LOTE
					cin.ignore();
					int cant;
					cout<<"Ingrese la cantidad del lote de VideoJuegos: ";
					cin>>cant;
					string nombre,genero,estado;
					int ano,players,serie;
					double precio;
					cout<<"Nombre: ";
					cin.ignore();
					getline(cin,nombre);
					cout<<"Ano: ";
					cin>>ano;
					cout<<"Jugadores: ";
					cin>>players;
					cout<<"Genero: ";
					cin>>genero;
					cout<<"Estado: ";
					cin>>estado;
					cout<<"Precio: ";
					cin>>precio;
					switch (getVideojuegos()){
						case 1:{
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Microsoftgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
							
						}
						case 2:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Sonygame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 3:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Nintendogame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}

							break;
						}
						case 4:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Bandaigame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 5:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Konamigame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 6:{
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new SquareEnixgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 7:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new ElectronicArtgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 8:{
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Segagame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						case 9:{
							cin.ignore();
							for (int i = 0; i < cant; ++i){
							cout<<"Serie ("<<(i+1)<<"): ";
							cin>>serie;
							while(!validateSerie(consoles,games,serie)){
								cout<<"Serie Duplicada!0 ";
								cout<<"Serie ("<<(i+1)<<"): ";
								cin>>serie;
							}
							Videojuego* temp=new Ubisoftgame(nombre,ano,players,genero,estado,serie,precio);
							games.push_back(temp);
							
							}
							break;
						}
						break;
					}

				}


				
				case 5:{//listar Consolas
					switch (consolasOption()){
						case 1:{
							int cont=0;
							cout<<"\n       Modelo    Invent    Ano    Precio    Estado\n";
							for (int i = 0; i < consoles.size(); ++i){
								string tipo=typeid(*consoles.at(i)).name();
								if(tipo=="4Sony"){
									cout<<(i+1)<<")- "<<(static_cast<Sony*>(consoles.at(i)))->getModelo()<<
									" | "<<consoles.at(i)->getSerie()<<" | "<<consoles.at(i)->getAno()<<" | "<<consoles.at(i)->getPrecio()<<
									" | "<<consoles.at(i)->getEstado()<<endl;
									cont++;
								}
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete consoles.at(posdel-1);
								consoles.erase(consoles.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!\n";
							}
							break;
						}
						case 2:{
							int cont=0;
							cout<<"\n       Modelo    Invent    Ano    Precio    Estado\n";
							for (int i = 0; i < consoles.size(); ++i){
								string tipo=typeid(*consoles.at(i)).name();
								if(tipo=="8Nintendo"){
									cout<<(i+1)<<")- "<<(static_cast<Sony*>(consoles.at(i)))->getModelo()<<
									" | "<<consoles.at(i)->getSerie()<<" | "<<consoles.at(i)->getAno()<<" | "<<consoles.at(i)->getPrecio()<<
									" | "<<consoles.at(i)->getEstado()<<endl;
									cont++;
								}
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete consoles.at(posdel-1);
								consoles.erase(consoles.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!\n";
							}

							break;
						}
						case 3:{
							cont=0;
							cout<<"\n       Modelo    Invent    Ano    Precio    Estado\n";
							for (int i = 0; i < consoles.size(); ++i){
								string tipo=typeid(*consoles.at(i)).name();
								if(tipo=="9Microsoft"){
									cout<<(i+1)<<")- "<<(static_cast<Sony*>(consoles.at(i)))->getModelo()<<
									" | "<<consoles.at(i)->getSerie()<<" | "<<consoles.at(i)->getAno()<<" | "<<consoles.at(i)->getPrecio()<<
									" | "<<consoles.at(i)->getEstado()<<endl;
									cont++;
								}
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete consoles.at(posdel-1);
								consoles.erase(consoles.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!\n";
							}

							break;
						}
					}
					break;
				}
				case 6:{//Eliminar Videojuegos
					switch (getVideojuegos()){
						case 1:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
								string tipo;
								tipo=typeid(*games.at(i)).name();
								if(tipo=="13Microsoftgame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Microsoftgame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 2:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
								if(tipo=="8Sonygame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Sonygame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 3:{

							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="11Nintendogame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Nintendogame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 4:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="10Bandaigame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Bandaigame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}
						}
						case 5:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="10Konamigame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Konamigame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}
							break;
						}
						case 6:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="14SquareEnixgame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<SquareEnixgame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 7:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="17ElectronicArtgame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<ElectronicArtgame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 8:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="8Segagame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Segagame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}

							break;
						}
						case 9:{
							int cont=0;
							for (int i = 0; i < games.size(); ++i){
							string tipo;
							tipo=typeid(*games.at(i)).name();
							if(tipo=="11Ubisoftgame"){
									cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
									games.at(i)->getGenero()<<" - "<<(static_cast<Ubisoftgame*>(games.at(i)))->getCreador()<<" - "<<
									games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
									cont++;
								}
								
							}
							if(cont!=0){
								cout<<"Ingrese posicion a Eliminar: ";
								int posdel;
								cin>>posdel;
								delete games.at(posdel-1);
								games.erase(games.begin()+(posdel-1));
							}else{
								cout<<"No hay nada que borrar aqui!"<<endl;
							}
							break;
						}

					}
					
				}
				case 7:{//cantidad de Consolas
					ListarConsolas(consoles);
 					break;
				}
				case 8:{//Modificar VideoJuegos

					for (int i = 0; i < games.size(); ++i){
						cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
						games.at(i)->getGenero()<<" - "<<(static_cast<Segagame*>(games.at(i)))->getCreador()<<" - "<<
						games.at(i)->getConsola()<<" - "<<games.at(i)->getAno()<<endl;
					}int pos;
					 if(games.size()>0){
					 	cout<<"Ingrese Posicion a Modificar Nombre: ";
					 	cin>>pos;
					 	pos=pos-1;
					 	while(pos<0 || pos>games.size()){
					 		cout<<"Posicion Invalida Ingrese una posicion valida!";
					 		cout<<"Ingrese Posicion a Modificar Nombre: ";
					 		cin>>pos;
					 	}
					 	string n_nombre;
						cout<<"Ingrese nuevo nombre: ";
					    cin.ignore();
					    getline(cin,n_nombre);
					    games.at(pos)->setNombre(n_nombre);
					    cout<<"Nombre modificado Exitosamente!"<<endl;

					 }else{
					 	cout<<"No hay Ningun Video Juego que Modificar!\n";
					 }
					
					 

					break;
				}
				default:{
					
					break;
				}

			}
			menu_admin=menuAdmin();
		}
			break;
		}
		case 2:{
			cout<<"\n------------Vendedor-------------\n\n";
			cout<<"Nombre Vendedor: ";
			string nombre;
			cin.ignore();
			getline(cin,nombre);
			Vendedor* dealer= new Vendedor(nombre);
			double dinero=0;
			int objetos;
			(static_cast<Vendedor*>(dealer))->setEntrada();
			int deal=dealerOption();
			while(deal!=3){
				switch (deal){
					case 1:{//Vender 
						string nombre;
						cout<<"Ingrese Nombre del Cliente: ";
						cin.ignore();
						getline(cin,nombre);
						Venta* cliente=new Venta(nombre);
						cliente->setVendedor(dealer->getNombre());
						bool fact=true;
						while(fact){
							switch (ventaOption()){
								case 1:{//vender consolas
									switch(consolasOption()){
										case 1:{//Sony
											int cont;
											for (int i = 0; i < consoles.size(); ++i){
												if(i==0){
													cout<<" #       Modelo         Serie        Ano      Estado       Precio\n";
												}
												string tipo=typeid(*consoles.at(i)).name();
												if(tipo=="4Sony"){
													cout<<(i+1)<<")- "<<(static_cast<Sony*>(consoles.at(i)))->getModelo()<<
													"          "<<consoles.at(i)->getSerie()<<"        "<<consoles.at(i)->getAno()<<"   "<<
													"   "<<consoles.at(i)->getEstado()<<"          "<<consoles.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												int serie;
												cout<<"Ingrese Serie de Consola a Comprar: ";
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < consoles.size(); ++i){
													if(serie==consoles.at(i)->getSerie()){
														existe=true;
														pos=i;
													}
												}
												if(existe){
													string estado,modelo;
													int serie,ano;
													double precio;
													modelo=(static_cast<Sony*>(consoles.at(pos)))->getModelo();
													
													estado=consoles.at(pos)->getEstado();
													serie=consoles.at(pos)->getSerie();
													ano=consoles.at(pos)->getAno();
													precio=consoles.at(pos)->getPrecio();
													
													cliente->setConsola(new Sony(modelo,estado,serie,precio,ano));
													cliente->setSubTotal(precio);
													delete consoles.at(pos);
													consoles.erase(consoles.begin()+pos);
													
													cout<<"Consola agregada a lista!\n";

												}else{
													cout<<"Numero de Serie no existe!\n";
												}
											}else{
												cout<<"No hay Consolas de ese Fabricante!\n";
											}
											////	
											break;
										}
										case 2:{//Nintendo
											int cont;
											for (int i = 0; i < consoles.size(); ++i){
												if(i==0){
													cout<<" #       Modelo         Serie        Ano      Estado       Precio\n";
												}
												string tipo=typeid(*consoles.at(i)).name();
												if(tipo=="8Nintendo"){
													cout<<(i+1)<<")- "<<(static_cast<Nintendo*>(consoles.at(i)))->getModelo()<<
													"          "<<consoles.at(i)->getSerie()<<"        "<<consoles.at(i)->getAno()<<"   "<<
													"   "<<consoles.at(i)->getEstado()<<"          "<<consoles.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												int serie;
												cout<<"Ingrese Serie de Consola a Comprar: ";
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < consoles.size(); ++i){
													if(serie==consoles.at(i)->getSerie()){
														existe=true;
														pos=i;
													}
												}
												if(existe){
													string estado,modelo;
													int serie,ano;
													double precio;
													modelo=(static_cast<Nintendo*>(consoles.at(pos)))->getModelo();
													
													estado=consoles.at(pos)->getEstado();
													serie=consoles.at(pos)->getSerie();
													ano=consoles.at(pos)->getAno();
													precio=consoles.at(pos)->getPrecio();
													
													cliente->setConsola(new Nintendo(modelo,estado,serie,precio,ano));
													cliente->setSubTotal(precio);
													delete consoles.at(pos);
													consoles.erase(consoles.begin()+pos);
													cout<<"Consola agregada a lista!\n";
												}else{
													cout<<"Numero de Serie no existe!\n";
												}
											}else{
												cout<<"No hay Consolas de ese Fabricante!\n";
											}
											/////break nintendo
											break;
										}
										case 3:{//Microsoft
											int cont;
											for (int i = 0; i < consoles.size(); ++i){
												if(i==0){
													cout<<" #       Modelo         Serie        Ano      Estado       Precio\n";
												}
												string tipo=typeid(*consoles.at(i)).name();
												if(tipo=="9Microsoft"){
													cout<<(i+1)<<")-     "<<(static_cast<Microsoft*>(consoles.at(i)))->getModelo()<<
													"          "<<consoles.at(i)->getSerie()<<"        "<<consoles.at(i)->getAno()<<"   "<<
													"   "<<consoles.at(i)->getEstado()<<"             "<<consoles.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												int serie;
												cout<<"Ingrese Serie de Consola a Comprar: ";
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < consoles.size(); ++i){
													if(serie==consoles.at(i)->getSerie()){
														existe=true;
														pos=i;
													}
												}
												if(existe){
													string estado,modelo;
													int serie,ano;
													double precio;
													modelo=(static_cast<Microsoft*>(consoles.at(pos)))->getModelo();
													
													estado=consoles.at(pos)->getEstado();
													serie=consoles.at(pos)->getSerie();
													ano=consoles.at(pos)->getAno();
													precio=consoles.at(pos)->getPrecio();
													
													cliente->setConsola(new Microsoft(modelo,estado,serie,precio,ano));
													cliente->setSubTotal(precio);
													delete consoles.at(pos);
													consoles.erase(consoles.begin()+pos);
													
													cout<<"Consola agregada a lista!\n";
												}else{
													cout<<"Numero de Serie no existe!\n";
												}
											}else{
												cout<<"No hay Consolas de ese Fabricante!\n";
											}
											break;
										}
									}
									break;
								}
								case 2:{//vender Videojuegos
									switch(ventaGames()){
										case 1:{
											int cont=0;
											for (int i = 0; i < games.size(); ++i){
												if(i==0){
													cout<<"  #    Nombre         Serie       Genero      Fabricante     Estado      Ano       Precio\n";
												}
												if(games.at(i)->getConsola()=="Sony" || games.at(i)->getConsola()=="All"){
													cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
													games.at(i)->getGenero()<<" - "<<(static_cast<Ubisoftgame*>(games.at(i)))->getCreador()<<" - "<<
													games.at(i)->getEstado()<<" - "<<games.at(i)->getAno()<<games.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												cout<<"Ingrese El numero de Serie del Juego a Comprar: ";
												int serie;
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < games.size(); ++i){
													if(games.at(i)->getSerie()==serie){
														existe=true;
														pos=i;
													}
												}
												if(existe){
												
													cliente->setVideoJuego(games.at(pos));
													games.erase(games.begin()+pos);

													cout<<"Video Juego agregado Existosamente!"<<endl;
													/////////////////////////////////
												}else{
													cout<<"El numero de serie Ingresado no existe!\n";
												}

											}else{
												cout<<"No hay Videojuegos en Inventario!\n";
											}
											break;
										}
										case 2:{
											int cont=0;
											for (int i = 0; i < games.size(); ++i){
												if(i==0){
													cout<<"  #    Nombre         Serie       Genero      Fabricante     Estado      Ano       Precio\n";
												}
												if(games.at(i)->getConsola()=="Nintendo" || games.at(i)->getConsola()=="All"){
													cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
													games.at(i)->getGenero()<<" - "<<(static_cast<Ubisoftgame*>(games.at(i)))->getCreador()<<" - "<<
													games.at(i)->getEstado()<<" - "<<games.at(i)->getAno()<<games.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												cout<<"Ingrese El numero de Serie del Juego a Comprar: ";
												int serie;
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < games.size(); ++i){
													if(games.at(i)->getSerie()==serie){
														existe=true;
														pos=i;
													}
												}
												if(existe){
													
													cliente->setVideoJuego(games.at(pos));
													games.erase(games.begin()+pos);
													cout<<"Video Juego agregado Existosamente!"<<endl;
													/////////////////////////////////
												}else{
													cout<<"El numero de serie Ingresado no existe!\n";
												}

											}else{
												cout<<"No hay Videojuegos en Inventario!\n";
											}
											break;
										}
										case 3:{
											int cont=0;
											for (int i = 0; i < games.size(); ++i){
												if(i==0){
													cout<<"  #    Nombre         Serie       Genero      Fabricante     Estado      Ano       Precio\n";
												}
												if(games.at(i)->getConsola()=="Microsoft" || games.at(i)->getConsola()=="All"){
													cout<<(i+1)<<") "<<games.at(i)->getNombre()<<" - "<<games.at(i)->getSerie()<<" - "<<
													games.at(i)->getGenero()<<" - "<<(static_cast<Ubisoftgame*>(games.at(i)))->getCreador()<<" - "<<
													games.at(i)->getEstado()<<" - "<<games.at(i)->getAno()<<games.at(i)->getPrecio()<<endl;
													cont++;
												}
											}
											if(cont!=0){
												cout<<"Ingrese El numero de Serie del Juego a Comprar: ";
												int serie;
												cin>>serie;
												bool existe=false;
												int pos;
												for (int i = 0; i < games.size(); ++i){
													if(games.at(i)->getSerie()==serie){
														existe=true;
														pos=i;
													}
												}
												if(existe){
													
													cliente->setVideoJuego(games.at(pos));
													games.erase(games.begin()+pos);
													cout<<"Video Juego agregado Existosamente!"<<endl;
													/////////////////////////////////
												}else{
													cout<<"El numero de serie Ingresado no existe!\n";
												}

											}else{
												cout<<"No hay Videojuegos en Inventario!\n";
											}

											break;
										}
										case 4:{
											break;
										}
									}
									break;
								}
								case 3:{//facturar
									cliente->setHoraFinal(getHora());
									stringstream nombre_a;
									nombre_a<<"./log_ventas/"<<cliente->getHoraFinal()<<"-"<<getFecha()<<".log";

									stringstream factura_s;
												 factura_s<<"             GAMEHUB             \n"<<
														   "Fecha:          "<<getFecha()<<"\n"<<
														   "Hora:           "<<cliente->getHoraFinal()<<"\n"<<
														   "Vendedor: "<<dealer->getNombre()<<"\n"<<
														   "Cliente:  "<<cliente->getNombre()<<"\n\n"<<

														   "Cantidad Articulos "<<(cliente->getConsola().size()+cliente->getVideoJuego().size())<<"\n\n";

														   for (int i = 0; i < cliente->getConsola().size(); ++i){
														   		factura_s<<cliente->getConsola().at(i)->getModelo()<<"       "<<cliente->getConsola().at(i)->getPrecio()<<"\n";
														   		objetos++;
														   }
														   for (int i = 0; i < cliente->getVideoJuego().size(); ++i){
														   		factura_s<<cliente->getVideoJuego().at(i)->getNombre()<<"       "<<cliente->getVideoJuego().at(i)->getPrecio()<<"\n";
														   		objetos++;
														   }

														   factura_s<<"\nSubTotal: "<<(cliente->getSubTotal());
														   factura_s<<"\nImpuesto: "<<(cliente->getSubTotal()*0.15);
														   factura_s<<"\nTotal:    "<<(cliente->getSubTotal())+(cliente->getSubTotal()*0.15)<<"\n";
									dinero=(cliente->getSubTotal())+(cliente->getSubTotal()*0.15);
									cout<<factura_s.str();
									ofstream file;
									string ruta=nombre_a.str();
									file.open(ruta.c_str());
									file<<factura_s.str();
									file.close();

									fact=false;
									break;
								}
							}
						}
						break;
					}
					case 2:{//Agregar Inventario


						break;
					}
					case 3:{//salir
						break;
					}


				}


				deal=dealerOption();
			}
			dealer->setSalida();
			stringstream r2;
			r2<<"./log_usuario/"<<dealer->getNombre()<<"-"<<getFecha()<<".log";
			string ruta2=r2.str();
			stringstream user;
			user<<"            GAMEHUB\n"<<
				  "Nombre:       "<<dealer->getNombre()<<"\n"<<
				  "Hora Entrada: "<<dealer->getEntrada()<<"\n"<<
				  "Hora Salida:  "<<dealer->getSalida()<<"\n\n"<<
				  "Cant. Articulos Vendidos "<<objetos<<"\n"<<
				  "Dinero Generado "<<dinero<<"\n";

			ofstream file;
			file.open(ruta2.c_str());
			file<<user.str();
			file.close();
			break;
		}
		default:{
			cout<<"------Saliendo del Sistema-------\n";
			break;
		}
	}menu_principal=userOption(admin);
	}while(menu_principal!=3);
	return 0;
}


int ventaGames(){
	int opc;
	do{
		cout<<"\n\n~.~.~.~VideoJuegos~.~.~.~\n";
		cout<<"1) Sony\n"<<
			  "2) Nintendo\n"<<
			  "3) Microsoft\n"<<
			  "4) Sony/Nintendo/Microsoft \n"<<
			  "Ingrese opcion: ";
		
		cin>>opc;
		if(opc<1 || opc>4){
			cout<<"Opcion no valida! \n";
		}else{
			return opc;
		}
	}while(opc<1 || opc>4);
}
void ListarConsolas(vector<Consola*> consoles){
	int xbox=0,xboxone=0,xbox360=0;
					int ps1=0,ps2=0,ps3=0,ps4=0,psp=0,psv=0;
					int nes=0,snes=0,n64=0,ng=0,nw=0,nwu=0,ns=0,gb=0,gc=0,ga=0,nds=0,ndsi=0,n3ds=0,nn3ds=0;
					for (int i = 0; i < consoles.size(); ++i){
						string tipo=typeid(*consoles.at(i)).name();
						
						if(tipo=="9Microsoft"){
							cout<<(static_cast<Sony*>(consoles.at(i)))<<endl;
							if((static_cast<Sony*>(consoles.at(i)))->getModelo()=="xbox"){
								xbox++;
							}
							if((static_cast<Sony*>(consoles.at(i)))->getModelo()=="xbox 360"){
								xbox360++;
							}
							if((static_cast<Sony*>(consoles.at(i)))->getModelo()=="xbox One"){
								xboxone++;
							}
							
						}
						if(tipo=="8Nintendo"){
							cout<<(static_cast<Nintendo*>(consoles.at(i)))->getModelo()<<endl;
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo Entertainment System"){
								nes++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Super Nintendo Entertainment System"){
								snes++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo 64"){
								n64++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo GameCube"){
								ng++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo Wii"){
								nw++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo Wii U"){
								nwu++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nitendo Switch"){
								ns++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Gameboy"){
								gb++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Gameboy Colors"){
								gc++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Gameboy Advance"){
								ga++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo DS"){
								nds++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo DSi"){
								ndsi++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo 3DS"){
								n3ds++;
							}
							if((static_cast<Nintendo*>(consoles.at(i)))->getModelo()=="Nintendo New 3DS"){
								nn3ds++;
							}
						}

						if(tipo=="4Sony"){
							cout<<(static_cast<Sony*>(consoles.at(i)))<<endl;
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="Play Station 1"){
								ps1++;				
							}
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="Play Station 2"){
								ps2++;
							}
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="Play Station 3"){
								ps3++;
							}
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="Play Station 4"){
								ps4++;
							}
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="PSP"){
								psp++;
							}
							if((static_cast<Microsoft*>(consoles.at(i)))->getModelo()=="PS Vita"){
								psv++;
							}

						}
					}
					cout<<"Cantidad De Consolas Disponibles en Inventario\n"<<
						  "Modelo                                 Cant.\n"<<
						  " xbox                                  "<<xbox  <<endl<<
						  " xbox 360                              "<<xboxone  <<endl<<
						  " xbox One                              "<<xbox360  <<endl<<
						  " Play Station 1                        "<<ps1  <<endl<<
						  " Play Station 2                        "<<ps2  <<endl<<
						  " Play Starion 3                        "<<ps3  <<endl<<
						  " Play Station 4                        "<<ps4  <<endl<<
						  " PSP                                   "<< psp <<endl<<
						  " PS Vita                               "<< psv <<endl<<
						  " Nintendo Entertainment System         "<< nes <<endl<<
						  " Super Nintendo Entertainment System   "<< snes <<endl<<
						  " Nintendo 64                           "<< n64 <<endl<<
						  " Nintendo GameCube                     "<< ng <<endl<<
						  " Nintendo Wii                          "<< nw <<endl<<
						  " Nintendo Wii U                        "<< nwu <<endl<<
						  " Nitendo Switch                        "<< ns <<endl<<
						  " Gameboy                               "<< gb <<endl<<
						  " Gameboy Colors                        "<< gc <<endl<<
						  " Gameboy Advance                       "<< ga <<endl<<
						  " Nintendo DS                           "<< nds <<endl<<
						  " Nintendo DSi                          "<< ndsi <<endl<<
						  " Nintendo 3DS                          "<< n3ds <<endl<<
						  " Nintendo New 3DS                      "<< nn3ds <<endl;
						
}

int ventaOption(){
	int retval;
	do{
	cout<<"1)- Consolas\n"<<
		  "2)- VideoJuego\n"<<
		  "3)- Facturar\n"<<
		  "Ingrese Opcion: ";
	cin>>retval;
	if(retval<1 || retval>3){
		cout<<"Opcion Invalida!\n";
	}else{
		return retval;
	}
	}while(retval<1 || retval>3);
}


int getVideojuegos(){
	int x;
	do{
		cout<<"\n\n-------VideoJuegos--------\n";
		cout<<"1) Microsoft\n"<<
		  "2) Sony\n"<<
		  "3) Nintendo\n"<<
		  "4) Bandai\n"<<
		  "5) Konami\n"<<
		  "6) Square Enix\n"<<
		  "7) Electronic Arts\n"<<
		  "8) Sega\n"<<
		  "9) Ubisoft\n"<<
		  "Ingrese Opcion:";
		  cin>>x;
		  if(x<1 || x>9){
		  	cout<<"Opcion no encontrada!";
		  }else{
		  	return x;
		  }
	}while(x<1 || x>9);


}
int dealerOption(){
	int retval;
	do{
	cout<<"1)- Vender\n"<<
		  "2)- Agregar a Inventario\n"<<
		  "3)- Salir de Vendedor\n"<<
		  "Ingrese Opcion: ";
	cin>>retval;
	if(retval<1 || retval>3){
		cout<<"Opcion Invalida!\n";
	}else{
		return retval;
	}
	}while(retval<1 || retval>3);
}

bool validateSerie(vector<Consola*> vec,vector<Videojuego*> vec2, int serie){
	for (int i = 0; i < vec.size(); ++i){
		if(vec.at(i)->getSerie()==serie){
			return false;
		}
	}
	for (int i = 0; i < vec2.size(); ++i){
		if(vec2.at(i)->getSerie()==serie){
			return false;
		}
	}
	return true;
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
		cout<<endl<<"~.~.~.~.Administrador~.~.~.~.~.\n";
		cout<<"1) Agregar Consola\n"<<
		 	  "2) Agregar VideoJuegos\n"<<
		  	  "3) Agregar lote Consolas\n"<<
		 	  "4) Agregar lote VideoJuegos\n"<<
		      "5) Eliminar Consola\n"<<
		      "6) Eliminar VideoJuegos\n"<<
		      "7) Cantidad de Consolas\n"<<
		      "8) Modificar VideoJuegos\n"<<
		      "9) Salir de Administrador\n"<<
		      "Ingrese Opcion: ";
		cin>>opc;
	 	if(opc<1 || opc>9){
	   		cout<<"Opcion no encontrada!\n";
	 	}else{
	 		return opc;
	 	}
	}while(opc<1 || opc>9);


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
				cin.ignore();
				cin>>usuario_name;
				cout<<"Password: ";
				cin.ignore();
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
	hour<<time->tm_hour<< "_" << time->tm_min << "_" << time->tm_sec;
	string hora=hour.str();
	return hora;
}

string getFecha(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	int year = 1900 + time->tm_year;
	stringstream fecha;
	fecha<<time->tm_mday<<"_"<<(time->tm_mon+1)<<"_"<<year;
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