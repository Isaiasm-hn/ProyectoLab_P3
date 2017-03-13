
#include "Videojuego.h"
#ifndef KONAMIGAME_H
#define KONAMIGAME_H
class Konamigame:public Videojuego{
	friend class boost::serialization::access;
	private:
		string creador;
	template<class Archive>
    void serialize(Archive & ar, const unsigned int /* file_version */){
        ar & creador & boost::serialization::base_object<Videojuego>(*this);
    }
	public:
		Konamigame(){
			
		}
		Konamigame(string,int,int,string,string,int,double);
		string getCreador();
	
};
#endif