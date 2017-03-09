#pragma once
#include "Consola.h"
class Sony:public Consola{
private:
	string modelo;
public:
	Sony(string,string,int,double,int);
	void setModelo(string);
	string getModelo();
	
	
};