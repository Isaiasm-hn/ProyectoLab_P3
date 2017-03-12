#include "Venta.h"



Venta::Venta(string pNombre){
	subtotal=0;
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

void Venta::setHoraFinal(string h){
	this->hora_fin=h;
}
string Venta::getVendedor(){
	return vendedor;
}

void Venta::setVendedor(string dealer){
	this->vendedor=dealer;
}
string Venta::getHoraFinal(){
	return hora_fin;
}
void Venta::setSubTotal(double sub){
	this->subtotal+=sub;
}
double Venta::getSubTotal(){
	return subtotal;
}