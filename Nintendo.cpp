#include "Nintendo.h"

Nintendo::Nintendo(string pModelo,string pEstado,string pSerie,double pPrecio):Consola(pEstado,pSerie,pPrecio){
	this->modelo=pModelo;
}
void Nintendo::setModelo(string m){
	this->modelo=m;
}
string Nintendo::getModelo(){
	return modelo;
}
