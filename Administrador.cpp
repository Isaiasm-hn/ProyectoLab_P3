#include "Administrador.h"

Administrador::Administrador(string pNombre,string pPassword):Usuario(pNombre){
	this->password=pPassword;
}
void Administrador::setPassword(string pPassword){
	this->password=pPassword;
}
string Administrador::getPassword(){
	return password;
}

