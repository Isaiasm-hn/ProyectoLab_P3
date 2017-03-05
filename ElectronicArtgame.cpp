#include "ElectronicArtgame.h"


ElectronicArtgame::ElectronicArtgame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Electronic Arts";
}

string ElectronicArtgame::getCreador(){
	return creador;
}
