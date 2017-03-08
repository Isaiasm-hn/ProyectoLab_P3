#include "DataBase.h"


DataBase::DataBase(vector<Consola*> con,vector<Videojuego*> gam ,vector<Usuario*> usu){
	this->consoles=con;
	this->games=gam;
	this->users=usu;

}

void DataBase::setConsolas(vector<Consola*> con){
	this->consoles=con;
}

void DataBase::setVideojuegos(vector<Videojuego*> gam){
	this->games=gam;
}

void DataBase::setUsarios(vector<Usuario*> usu){
	this->users=usu;
}

vector<Consola*> DataBase::getConsolas(){
	return consoles;
}

vector<Videojuego*>  DataBase::getVideojuegos(){
	return games;
}

vector<Usuario*> DataBase::getUsuarios(){
	return users;
}





