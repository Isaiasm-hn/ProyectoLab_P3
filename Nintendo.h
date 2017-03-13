
#include "Consola.h"

#ifndef NINTENDO_H
#define NINTENDO_H
class Nintendo:public Consola{

friend class boost::serialization::access;	

private:
	string modelo;

public:
	Nintendo();
	Nintendo(string,string,int,double,int);

	virtual void setModelo(string);
	virtual string getModelo();

template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
        ar & modelo & boost::serialization::base_object<Consola>(*this);
}
};
#endif