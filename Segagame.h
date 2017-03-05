#include "Videojuego.h"

class Segagame:public Videojuego{
private:
	string creador;
public:
	Segagame(string,int,int,string,string,string,double);
	string getCreador();
	
};