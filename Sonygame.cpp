#include "Sonygame.h"

Sonygame::Sonygame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,int pSerie
	,double pPrecio):Videojuego(pNombre,pAno,"Sony",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Sony";
}
string Sonygame::getCreador(){
	return creador;
}
