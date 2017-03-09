#pragma once
#include <iostream>
#include <string>

using namespace std;

class Videojuego{
private:
	string nombre;
	int ano;
	string consola;
	int players;
	string genero;
	string estado;
	int serie;
	double precio;

public:
	Videojuego(string,int,string,int,string,string,int,double);
	void setNombre(string);
	void setAno(int);
	void setConsola(string);
	void setPlayers(int);
	void setGenero(string);
	void setEstado(string);
	void setSerie(int);
	void setPrecio(double);
	string getNombre();	
	string getConsola();
	string getGenero();
	string getEstado();
	int getSerie();
	int getAno();
	int getPlayers();
	double getPrecio();



	
	
};