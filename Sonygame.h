#include "Videojuego.h"

#ifndef SONYGAME_H
#define SONYGAME_H
class Sonygame:public Videojuego{

friend class boost::serialization::access;	

private:
	string creador;
	template<class Archive>
    void serialize(Archive & ar, const unsigned int /* file_version */){
		ar & creador & boost::serialization::base_object<Videojuego>(*this);
    }
public:
	Sonygame(string,int,int,string,string,int,double);
	string getCreador();
};
#endif