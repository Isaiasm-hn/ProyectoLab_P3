#pragma once
#include <string>

using namespace std;

class Usuario{
private:
	string nombre;
public:
	Usuario(string);
	void setNombre(string);
	virtual string getNombre();
	virtual void setPassword(string);
	
	
};
