#pragma once
#include "Consola.h"
class Sony:public Consola{
private:
	string modelo;
public:
	Sony(string,string,string,double,int);
	void setModelo(string);
	string getModelo();
	
	
};