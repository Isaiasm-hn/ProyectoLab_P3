
#include "Usuario.h"
#ifndef ADMINISTADOR_H
#define ADMINISTADOR_H
class Administrador:public Usuario{
private:
	string password;
public:
	Administrador(string, string);
	void setPassword(string);
	string getPassword();
	
	
};
#endif
