#include "Videojuego.h"

class Ubisoftgame:public Videojuego{
private:
	string creador;
public:
	Ubisoftgame(string,int,int,string,string,int,double);
	string getCreador();
	
};