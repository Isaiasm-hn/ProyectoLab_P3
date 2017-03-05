#include "Usuario.h"

Usuario::Usuario(string pNombre){
	this->nombre=pNombre;
}
void Usuario::setNombre(string pNombre){
	this->nombre=pNombre;
}
string Usuario::getNombre(){
	return nombre;
}
