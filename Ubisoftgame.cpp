#include "Ubisoftgame.h"

Ubisoftgame::Ubisoftgame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Ubisoft";
}

string Ubisoftgame::getCreador(){
	return creador;
}