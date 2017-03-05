#pragma once
#include "Videojuego.h"

class Nintendogame:public Videojuego{
private:
	string creador;
public:
	Nintendogame(string,int,int,string,string,string,double);
	string getCreador();	
};