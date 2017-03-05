#include "Nintendo.h"

Nintendo::Nintendo(string pModelo,string pEstado,string pSerie,double pPrecio,int pAno):Consola(pEstado,pSerie,pPrecio,pAno){
	this->modelo=pModelo;
}
void Nintendo::setModelo(string m){
	this->modelo=m;
}
string Nintendo::getModelo(){
	return modelo;
}
