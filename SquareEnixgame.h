#include "Videojuego.h"

class SquareEnixgame:public Videojuego{
private:
	string creador;
public:
	SquareEnixgame(string,int,int,string,string,int,double);
	string getCreador();
	
};