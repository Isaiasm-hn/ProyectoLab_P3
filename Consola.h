#pragma once
#include <iostream>
#include <string>

using namespace std;

class Consola{
private:
	string estado;
	string serie;
	double precio;


public:
	//contructor
	Consola(string,string,double);
	
	void setEstado(string);
	string getEstado();
	void setSerie(string);
	string getSerie();
	void setPrecio(double);
	double getPrecio();


	
};