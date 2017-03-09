#include "Videojuego.h"

class Bandaigame:public Videojuego{
private:
	string creador;
public:
	Bandaigame(string,int,int,string,string,int,double);
	string getCreador();
	
	
};
