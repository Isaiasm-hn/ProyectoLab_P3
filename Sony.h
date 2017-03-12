#pragma once
#include "Consola.h"
class Sony:public Consola{
private:
	string modelo;
public:
	Sony(string,string,int,double,int);
	virtual void setModelo(string);
	virtual string getModelo();
	
	
};