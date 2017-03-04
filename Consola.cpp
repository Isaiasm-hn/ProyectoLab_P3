#include "Consola.h"

using namespace std;

Consola::Consola(string pEstado,string pSerie,double pPrecio){
	this->estado=pEstado;
	this->serie=pSerie;
	this->precio=pPrecio;

}

void Consola::setEstado(string x){
	this->estado=x;
}

string Consola::getEstado(){
	return estado;
}
void Consola::setSerie(string x){
	this->serie=x;
}
string Consola::getSerie(){
	return serie;
}
void Consola::setPrecio(double p){
	this->precio=p;
}
double Consola::getPrecio(){
	return precio;
}


