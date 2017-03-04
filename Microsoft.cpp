#include "Microsoft.h"

using namespace std;

Microsoft::Microsoft(string pModelo,string pEstado,string pSerie,double pPrecio):Consola(pEstado,pSerie,pPrecio){
	this->modelo=pModelo;
}

void Microsoft::setModelo(string m){
	this->modelo=m;
}

string Microsoft::getModelo(){
	return modelo;
}