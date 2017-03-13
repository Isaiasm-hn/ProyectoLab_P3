
#include "Consola.h"
#ifndef MICROSOFT_H
#define MICROSOFT_H
using namespace std;

class Microsoft: public Consola{
private:
	string modelo;
public:
	Microsoft(string,string,int,double,int);
	
	virtual void setModelo(string);
	virtual string getModelo();

	
	
};
#endif