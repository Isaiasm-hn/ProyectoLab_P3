#include "Vendedor.h"

Vendedor::Vendedor(string pNombre):Usuario(pNombre){

}
string Vendedor::getTime(){
	time_t t_sis = time(0);
	tm * time = localtime(&t_sis);
	stringstream hour;
	hour<<time->tm_hour<< ":" << time->tm_min << ":" << time->tm_sec;
	string hora=hour.str();
	return hora;

}
void Vendedor::setEntrada(){
	this->hora_entrada=getTime();
}
string Vendedor::getEntrada(){
	return hora_entrada;
}
void Vendedor::setSalida(){
	this->hora_salida=getTime();
}
string Vendedor::getSalida(){
	return hora_salida;
}