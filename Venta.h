#pragma once
#include "Consola.h"
#include "Videojuego.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Venta{
private:
	string nombre;
	vector<Consola*> conso;
	vector<Videojuego*> games;

public:
	Venta(string);
	void setNombre(string);
	string getNombre();
	void setConsola(Consola*);
	vector<Consola*> getConsola();
	void setVideoJuego(Videojuego*);
	vector<Videojuego*> getVideoJuego();


	
};