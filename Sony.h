#include "Consola.h"
class Sony:public Consola{
private:
	string modelo;
public:
	Sony(string,string,string,double);
	void setModelo(string);
	string getModelo();
	
	
};