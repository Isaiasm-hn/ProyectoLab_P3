#include "Consola.h"

using namespace std;

#ifndef MICROSOFT_H
#define MICROSOFT_H
class Microsoft: public Consola{
friend class boost::serialization::access;

private:
	string modelo;
public:
	Microsoft(string,string,int,double,int);
	
	virtual void setModelo(string);
	virtual string getModelo();

 template<class Archive>
 void serialize(Archive & ar, const unsigned int /* file_version */){
        ar & modelo & boost::serialization::base_object<Consola>(*this);
 }
	
	
};
#endif