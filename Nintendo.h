#pragma once
#include "Consola.h"

class Nintendo:public Consola{
private:
	string modelo;
public:
	Nintendo();
	Nintendo(string,string,int,double,int);

	void setModelo(string);
	string getModelo();
	
	
};