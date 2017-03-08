#include "Videojuego.h"

class ElectronicArtgame:public Videojuego{
private:
	string creador;
public:
	ElectronicArtgame(string,int,int,string,string,string,double);
	string getCreador();
	
};