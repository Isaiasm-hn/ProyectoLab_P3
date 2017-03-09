#pragma once
#include "Videojuego.h"
class Sonygame:public Videojuego{
private:
	string creador;
public:
	Sonygame(string,int,int,string,string,int,double);
	string getCreador();
};