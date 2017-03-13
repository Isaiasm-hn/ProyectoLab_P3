
#include "Usuario.h"
#include <ctime>
#include <vector>
#include <sstream>

#ifndef VENDEDOR_H
#define VENDEDOR_H
class Vendedor:public Usuario{
private:
	string hora_entrada;
	string hora_salida;	
public:
	Vendedor(string);
	string getTime();
	void setEntrada();
	string getEntrada();
	void setSalida();
	string getSalida();
	
};
#endif
