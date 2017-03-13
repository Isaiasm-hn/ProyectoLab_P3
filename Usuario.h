
#include <string>

using namespace std;
#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
private:
	string nombre;
public:
	Usuario(string);
	void setNombre(string);
	virtual string getNombre();
	virtual void setPassword(string);
	
	
};
#endif
