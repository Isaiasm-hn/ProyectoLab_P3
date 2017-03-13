
#include <iostream>
#include <string>

using namespace std;
#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
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
	virtual void setNombre(string);
	virtual void setAno(int);
	virtual void setConsola(string);
	virtual void setPlayers(int);
	virtual void setGenero(string);
	virtual void setEstado(string);
	virtual void setSerie(int);
	virtual void setPrecio(double);
	virtual string getNombre();	
	virtual string getConsola();
	virtual string getGenero();
	virtual string getEstado();
	virtual int getSerie();
	virtual int getAno();
	virtual int getPlayers();
	virtual double getPrecio();
};
#endif