
#include "Videojuego.h"
#ifndef ELECTRONICARTGAME_H
#define ELECTRONICARTGAME_H
class ElectronicArtgame:public Videojuego{
friend class boost::serialization::access;
private:
	string creador;
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
    ar & creador & boost::serialization::base_object<Videojuego>(*this);
}
public:
	ElectronicArtgame(string,int,int,string,string,int,double);
	string getCreador();
	
};
#endif