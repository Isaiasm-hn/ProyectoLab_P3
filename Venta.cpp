#include "Venta.h"



Venta::Venta(string pNombre){
	this->nombre=pNombre;
}
void Venta::setNombre(string pNombre){
	this->nombre=pNombre;
}
string Venta::getNombre(){
	return nombre;
}
void Venta::setConsola(Consola* c){
	conso.push_back(c);
}
vector<Consola*> Venta::getConsola(){
	return conso;
}

void Venta::setVideoJuego(Videojuego* v){
	games.push_back(v);
}
vector<Videojuego*> Venta::getVideoJuego(){
	return games;
}

