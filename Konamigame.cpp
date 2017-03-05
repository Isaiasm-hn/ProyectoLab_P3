#include "Konamigame.h"

Konamigame::Konamigame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Konami";
}

string Konamigame::getCreador(){
	return creador;
}