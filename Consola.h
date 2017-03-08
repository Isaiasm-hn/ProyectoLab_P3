#pragma once
#include <iostream>
#include <string>

using namespace std;

class Consola{
private:
	string estado;
	string serie;
	double precio;
	int ano;

public:
	//contructor
	Consola();
	Consola(string,string,double,int);
	
	void setEstado(string);
	string getEstado();
	void setSerie(string);
	string getSerie();
	void setPrecio(double);
	double getPrecio();
	void setAno(int);
	int getAno();


	
};