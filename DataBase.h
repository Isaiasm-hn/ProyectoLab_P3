#pragma once
#include "Videojuego.h"
#include "Consola.h"
#include "Usuario.h"
#include <iostream>
#include <vector>

class DataBase{
private:
	vector<Consola*> consoles;
	vector<Videojuego*> games;
	vector<Usuario*> users;
public:
	DataBase(vector<Consola*>,vector<Videojuego*>,vector<Usuario*>);
	void setConsolas(vector<Consola*>);
	void setVideojuegos(vector<Videojuego*>);
	void setUsarios(vector<Usuario*>);
	vector<Consola*> getConsolas();
	vector<Videojuego*> getVideojuegos();
	vector<Usuario*> getUsuarios();	
};