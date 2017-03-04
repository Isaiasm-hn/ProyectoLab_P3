#include "Consola.h"

class Nintendo:public Consola{
private:
	string modelo;
public:
	Nintendo(string,string,string,double);

	void setModelo(string);
	string getModelo();
	
	
};