#include "Segagame.h"

Segagame::Segagame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,int pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Sega";
}

string Segagame::getCreador(){
	return creador;
}