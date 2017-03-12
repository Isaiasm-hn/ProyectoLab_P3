#include "Consola.h"

using namespace std;

Consola::Consola(){
	
}

Consola::Consola(string pEstado,int pSerie,double pPrecio,int pAno){
	this->estado=pEstado;
	this->serie=pSerie;
	this->precio=pPrecio;
	this->ano=pAno;

}

void Consola::setEstado(string x){
	this->estado=x;
}

string Consola::getEstado(){
	return estado;
}
void Consola::setSerie(int x){
	this->serie=x;
}
int Consola::getSerie(){
	return serie;
}
void Consola::setPrecio(double p){
	this->precio=p;
}
double Consola::getPrecio(){
	return precio;
}
void Consola::setAno(int x){
	this->ano=x;
}
int Consola::getAno(){
	return ano;
}

string Consola::getModelo(){
	return "";
}

