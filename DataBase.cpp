#include "DataBase.h"
DataBase::DataBase(){
}

DataBase::DataBase(vector<Consola*> con,vector<Videojuego*> gam ){
	this->consolas=con;
	this->games=gam;
	

}

void DataBase::setConsolas(vector<Consola*> con){
	this->consolas=con;
}

void DataBase::setVideojuegos(vector<Videojuego*> gam){
	this->games=gam;
}


vector<Consola*> DataBase::getConsolas(){
	return consolas;
}

vector<Videojuego*>  DataBase::getVideojuegos(){
	return games;
}

DataBase::~DataBase(){
	for (int i = 0; i < consolas.size(); ++i)
	{
		delete consolas[i];
	}
	for (int i = 0; i < games.size(); ++i)
	{
		delete games[i];
	}
	consolas.clear();
	games.clear();
}





