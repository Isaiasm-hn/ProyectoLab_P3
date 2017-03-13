main.sex: main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o Bandaigame.o Konamigame.o SquareEnixgame.o ElectronicArtgame.o Segagame.o Ubisoftgame.o DataBase.o Venta.o
	g++ main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o Bandaigame.o Konamigame.o SquareEnixgame.o ElectronicArtgame.o Segagame.o Ubisoftgame.o DataBase.o Venta.o -o main

main.o:	Consola.h Microsoft.h Nintendo.h Sony.h Videojuego.h Microsoftgame.h Sonygame.h Nintendogame.h Bandaigame.h Konamigame.h SquareEnixgame.h ElectronicArtgame.h Segagame.h Ubisoftgame.h Usuario.h Vendedor.h  Administrador.h Venta.h DataBase.h main.cpp  
	g++ -c Consola.h Microsoft.h Nintendo.h Sony.h Videojuego.h Microsoftgame.h Sonygame.h Nintendogame.h Bandaigame.h Konamigame.h SquareEnixgame.h ElectronicArtgame.h Segagame.h Ubisoftgame.h Usuario.h Vendedor.h  Administrador.h Venta.h DataBase.h  main.cpp  -std=c++11 -lboost_serialization

Consola.o:	Consola.cpp Consola.h
	g++ -c Consola.cpp -std=c++11 -lboost_serialization

Sony.o:	Sony.cpp Sony.h Consola.h
	g++ -c Sony.cpp -std=c++11 -lboost_serialization

Microsoft.o:	Microsoft.cpp Microsoft.h Consola.h
	g++ -c Microsoft.cpp -std=c++11 -lboost_serialization

Nintendo.o:	Nintendo.cpp Nintendo.h	Consola.h
	g++ -c Nintendo.cpp -std=c++11 -lboost_serialization

Usuario.o:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp -std=c++11

Administrador.o:	Administrador.cpp Administrador.h Usuario.h
	g++ -c Administrador.cpp -std=c++11

Vendedor.o:	Vendedor.cpp Vendedor.h Usuario.h
	g++ -c Vendedor.cpp -std=c++11 -lboost_serialization

Videojuego.o:	Videojuego.cpp Videojuego.h
	g++ -c Videojuego.cpp -std=c++11 -lboost_serialization

Microsoftgame.o:	Microsoftgame.cpp Microsoftgame.h Videojuego.h
	g++ -c Microsoftgame.cpp -std=c++11 -lboost_serialization

Sonygame.o: Sonygame.cpp Sonygame.h Videojuego.h
	g++ -c Sonygame.cpp -std=c++11 -lboost_serialization

Nintendogame.o:	Nintendogame.cpp Nintendogame.h Videojuego.h
	g++ -c Nintendogame.cpp -std=c++11 -lboost_serialization

Bandaigame.o:	Bandaigame.cpp Bandaigame.h Videojuego.h
	g++ -c Bandaigame.cpp -std=c++11 -lboost_serialization

Konamigame.o:	Konamigame.cpp Konamigame.h Videojuego.h
	g++ -c Konamigame.cpp -std=c++11 -lboost_serialization

SquareEnixgame.o:	SquareEnixgame.cpp SquareEnixgame.h Videojuego.h
	g++ -c SquareEnixgame.cpp -std=c++11 -lboost_serialization

ElectronicArtgame.o: ElectronicArtgame.cpp ElectronicArtgame.h Videojuego.h
	g++ -c ElectronicArtgame.cpp -std=c++11 -lboost_serialization

Segagame.o:	Segagame.cpp Segagame.h	Videojuego.h
	g++ -c Segagame.cpp -std=c++11 -lboost_serialization

Ubisoftgame.o:	Ubisoftgame.cpp Ubisoftgame.h Videojuego.h
	g++ -c Ubisoftgame.cpp -std=c++11 -lboost_serialization

DataBase.o:	DataBase.cpp DataBase.h
	g++ -c DataBase.cpp -std=c++11 -lboost_serialization

Venta.o:	Venta.cpp Venta.h Consola.h Videojuego.h
	g++ -c Venta.cpp -std=c++11
clean:
	rm *.o *.h.gch main 