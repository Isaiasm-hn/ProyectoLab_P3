#include "Videojuego.h"

class SquareEnixgame:public Videojuego{
private:
	string creador;
public:
	SquareEnixgame(string,int,int,string,string,string,double);
	string getCreador();
	
};