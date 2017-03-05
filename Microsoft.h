#pragma once
#include "Consola.h"

using namespace std;

class Microsoft: public Consola{
private:
	string modelo;
public:
	Microsoft(string,string,string,double,int);
	
	void setModelo(string);
	string getModelo();

	
	
};