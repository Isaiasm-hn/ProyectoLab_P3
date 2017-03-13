#include "Consola.h"

#ifndef SONY_H
#define SONY_H
class Sony:public Consola{
private:
	string modelo;
public:
	Sony(string,string,int,double,int);
	virtual void setModelo(string);
	virtual string getModelo();
};
#endif