#include "Videojuego.h"

class Konamigame:public Videojuego{
private:
	string creador;
public:
	Konamigame(string,int,int,string,string,int,double);
	string getCreador();
	
	
};