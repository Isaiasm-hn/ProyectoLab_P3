
#include "Consola.h"

#ifndef NINTENDO_H
#define NINTENDO_H
class Nintendo:public Consola{
private:
	string modelo;
public:
	Nintendo();
	Nintendo(string,string,int,double,int);

	virtual void setModelo(string);
	virtual string getModelo();
};
#endif