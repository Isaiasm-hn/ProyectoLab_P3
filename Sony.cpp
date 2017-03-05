#include "Sony.h"

Sony::Sony(string pModelo,string pEstado,string pSerie,double pPrecio,int pAno):Consola(pEstado,pSerie,pPrecio,pAno){
	this->modelo=pModelo;
}
void Sony::setModelo(string m){
	this->modelo=m;
}
string Sony::getModelo(){
	return modelo;
}

