#pragma once
#include "Videojuego.h"

class Nintengogame:public Videojuego{
private:
	string creador
public:
	Nintengogame(string,int,int,string,string,string,double);
	string getCreador();	
};