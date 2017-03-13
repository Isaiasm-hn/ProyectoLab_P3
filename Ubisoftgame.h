
#include "Videojuego.h"
#ifndef UBISOFTGAME_H
#define UBISOFTGAME_H
class Ubisoftgame:public Videojuego{
friend class boost::serialization::access;
private:
	string creador;
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
    ar & creador & boost::serialization::base_object<Videojuego>(*this);
}
public:
	Ubisoftgame(){}
	Ubisoftgame(string,int,int,string,string,int,double);
	string getCreador();
	
};
#endif