#pragma once
#include "Videojuego.h"

class Microsoftgame:public Videojuego{
friend class boost::serialization::access;	

private:
	string creador;

	template<class Archive>
    void serialize(Archive & ar, const unsigned int /* file_version */){
		ar & creador & boost::serialization::base_object<Videojuego>(*this);
    }
public:
	Microsoftgame(string,int,int,string,string,int,double);
	string getCreador();
};