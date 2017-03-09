#include "Bandaigame.h"

Bandaigame::Bandaigame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,int pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Bandai";
}

string Bandaigame::getCreador(){
	return creador;
}