#include "Nintendo.h"


Nintendo::Nintendo(){
	
}
Nintendo::Nintendo(string pModelo,string pEstado,int pSerie,double pPrecio,int pAno):Consola(pEstado,pSerie,pPrecio,pAno){
	this->modelo=pModelo;
}
void Nintendo::setModelo(string m){
	this->modelo=m;
}
string Nintendo::getModelo(){
	return modelo;
}
