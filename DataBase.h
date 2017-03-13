//Include Todo Consolas
#include "Consola.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"

//Include todo Juegos
#include "Videojuego.h"
#include "Microsoftgame.h"
#include "Nintendogame.h"
#include "Sonygame.h"
#include "Bandaigame.h"
#include "Konamigame.h"
#include "SquareEnixgame.h"
#include "ElectronicArtgame.h"
#include "Segagame.h"
#include "Ubisoftgame.h"


#include <boost/serialization/vector.hpp>


using namespace std;

#ifndef DATABASE_H
#define DATABASE_H
class DataBase{

 friend class boost::serialization::access;

private:
	vector<Consola*> consolas;
	vector<Videojuego*> games;
	
public:
	DataBase(vector<Consola*>,vector<Videojuego*>);
	~DataBase();

	void setConsolas(vector<Consola*>);
	void setVideojuegos(vector<Videojuego*>);

	vector<Consola*> getConsolas();
	vector<Videojuego*> getVideojuegos();
	
	template<class Archive>
	void serialize(Archive & ar, const unsigned int /* file_version */){
		
        ar.register_type(static_cast<Microsoft*>(NULL));
        ar.register_type(static_cast<Nintendo*>(NULL));
        ar.register_type(static_cast<Sony*>(NULL));	
        ar & consolas;

		
        ar.register_type(static_cast<Microsoftgame*>(NULL));
        ar.register_type(static_cast<Nintendogame*>(NULL));
        ar.register_type(static_cast<Sonygame*>(NULL));
        ar.register_type(static_cast<Bandaigame*>(NULL));
        ar.register_type(static_cast<Konamigame*>(NULL));
        ar.register_type(static_cast<ElectronicArtgame*>(NULL));
        ar.register_type(static_cast<Segagame*>(NULL));
        ar.register_type(static_cast<SquareEnixgame*>(NULL));
        ar.register_type(static_cast<Ubisoftgame*>(NULL));

        ar & games;
    }

};
#endif