#pragma once
#include "Consola.h"

class Nintendo:public Consola{
private:
	string modelo;
public:
	Nintendo(string,string,string,double,int);

	void setModelo(string);
	string getModelo();
	
	
};