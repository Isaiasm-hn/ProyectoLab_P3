#include "SquareEnixgame.h"

SquareEnixgame::SquareEnixgame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie,
	double pPrecio):Videojuego(pNombre,pAno,"All",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Square Enix";
}

string SquareEnixgame::getCreador(){
	return creador;
}