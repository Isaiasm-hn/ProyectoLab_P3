
#include "Nintendogame.h"

Nintendogame::Nintendogame(string pNombre,int pAno,int pPlayers,string pGenero,string pEstado,string pSerie
	,double pPrecio):Videojuego(pNombre,pAno,"Nintendo",pPlayers,pGenero,pEstado,pSerie,pPrecio){
	this->creador="Nintendo";
}
string Nintendogame::getCreador(){
	return creador;
}
