#pragma once
#include "Usuario.h"

class Administrador:public Usuario{
private:
	string password;
public:
	Administrador(string, string);
	void setPassword(string);
	string getPassword();
	
	
};
