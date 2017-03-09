#pragma once
#include "Consola.h"

using namespace std;

class Microsoft: public Consola{
private:
	string modelo;
public:
	Microsoft(string,string,int,double,int);
	
	void setModelo(string);
	string getModelo();

	
	
};