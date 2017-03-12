#pragma once
#include "Consola.h"

class Nintendo:public Consola{
private:
	string modelo;
public:
	Nintendo();
	Nintendo(string,string,int,double,int);

	virtual void setModelo(string);
	virtual string getModelo();
	
	
};