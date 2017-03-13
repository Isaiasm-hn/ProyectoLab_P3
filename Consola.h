
#include <iostream>
#include <string>
#ifndef CONSOLA_H
#define CONSOLA_H


using namespace std;

class Consola{
	
private:
	string estado;
	int serie;
	double precio;
	int ano;

public:
	//contructor
	Consola();
	Consola(string,int,double,int);
	
	virtual void setEstado(string);
	virtual string getEstado();
	virtual void setSerie(int);
	virtual int getSerie();
	virtual void setPrecio(double);
	virtual double getPrecio();
	virtual void setAno(int);
	virtual int getAno();
	virtual string getModelo();
};
#endif