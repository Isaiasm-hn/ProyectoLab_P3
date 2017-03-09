#include "Videojuego.h"

Videojuego::Videojuego(string pNombre,int pAno,string pConsola,int pPlayers,string pGenero,string pEstado,int pSerie,double pPrecio){
	this->nombre=pNombre;
	this->ano=pAno;
	this->consola=pConsola;
	this->players=pPlayers;
	this->genero=pGenero;
	this->estado=pEstado;
	this->serie=pSerie;
	this->precio=pPrecio;
}

void Videojuego::setNombre(string x){
	this->nombre=x;
}
void Videojuego::setAno(int x){
	this->ano=x;
}
void Videojuego::setConsola(string x){
	this->consola=x;
}
void Videojuego::setPlayers(int x){
	this->players=x;
}
void Videojuego::setGenero(string x){
	this->genero=x;
}
void Videojuego::setEstado(string x){
	this->estado=x;
}
void Videojuego::setSerie(int x){
	this->serie=x;
}
void Videojuego::setPrecio(double x){
	this->precio=x;
}
string Videojuego::getNombre(){
	return nombre;
}
string Videojuego::getConsola(){
	return consola;
}
string Videojuego::getGenero(){
	return genero;
}
string Videojuego::getEstado(){
	return estado;
}
int Videojuego::getSerie(){
	return serie;
}
int Videojuego::getAno(){
	return ano;
}
int Videojuego::getPlayers(){
	return players;
}
double Videojuego::getPrecio(){
	return precio;
}










