
#include <iostream>
#include <string>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/assume_abstract.hpp>

using namespace std;

#ifndef CONSOLA_H
#define CONSOLA_H
class Consola{
friend class boost::serialization::access;

private:
	string estado;
	int serie;
	double precio;
	int ano;


template<class Archive>
	void serialize(Archive & ar, const unsigned int /* file_version */){
		ar & estado & serie & precio & ano;
	}
public:
	//contructor
	Consola(){
	}
	Consola(string,int,double,int);
	
	virtual void setEstado(string);
	virtual string getEstado();
	virtual void setSerie(int);
	virtual int getSerie();
	virtual void setPrecio(double);
	virtual double getPrecio();
	virtual void setAno(int);
	virtual int getAno();
	virtual string getModelo();
};
#endif