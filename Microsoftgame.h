#pragma once
#include "Videojuego.h"

class Microsoftgame:public Videojuego{
private:
	string creador;
public:
	Microsoftgame(string,int,int,string,string,int,double);
	string getCreador();
};