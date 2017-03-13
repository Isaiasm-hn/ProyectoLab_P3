#include "Videojuego.h"

#ifndef NINTENDOGAME_H
#define NINTENDOGAME_H
class Nintendogame:public Videojuego{

friend class boost::serialization::access;	

private:
	string creador;
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & creador & boost::serialization::base_object<Videojuego>(*this);
}
public:
	Nintendogame(string,int,int,string,string,int,double);
	string getCreador();	
};
#endif