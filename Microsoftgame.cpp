#include "Microsoftgame.h"

Microsoftgame::Microsoftgame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie,double pPrecio):Videojuego(pNombre,pAno,"Microsoft",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Microsoft";
}

string Microsoftgame::getCreador(){
	return creador;
}
