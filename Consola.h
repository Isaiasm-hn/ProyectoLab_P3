#pragma once
#include <iostream>
#include <string>

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
	
	void setEstado(string);
	string getEstado();
	void setSerie(int);
	int getSerie();
	void setPrecio(double);
	double getPrecio();
	void setAno(int);
	int getAno();


	
};