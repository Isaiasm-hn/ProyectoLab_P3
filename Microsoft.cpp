#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(string pModelo,string pEstado,string pSerie,double pPrecio,int pAno):Consola(pEstado,pSerie,pPrecio,pAno){
	this->modelo=pModelo;
}

void Microsoft::setModelo(string m){
	this->modelo=m;
}

string Microsoft::getModelo(){
	return modelo;
}