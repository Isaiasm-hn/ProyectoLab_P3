#include "Sony.h"

Sony::Sony(string pModelo,string pEstado,string pSerie,double pPrecio):Consola(pEstado,pSerie,pPrecio){
	this->modelo=pModelo;
}
void Sony::setModelo(string m){
	this->modelo=m;
}
string Sony::getModelo(){
	return modelo;
}

