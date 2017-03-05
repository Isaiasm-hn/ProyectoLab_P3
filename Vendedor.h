#pragma once
#include "Usuario.h"
#include <ctime>
#include <vector>
#include <sstream>


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
