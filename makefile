main.sex: main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o Bandaigame.o Konamigame.o SquareEnixgame.o ElectronicArtgame.o Segagame.o Ubisoftgame.o DataBase.o Venta.o
	g++ main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o Bandaigame.o Konamigame.o SquareEnixgame.o ElectronicArtgame.o Segagame.o Ubisoftgame.o DataBase.o Venta.o -o main

main.o:	Consola.h Microsoft.h Nintendo.h Sony.h Videojuego.h Microsoftgame.h Sonygame.h Nintendogame.h Bandaigame.h Konamigame.h SquareEnixgame.h ElectronicArtgame.h Segagame.h Ubisoftgame.h Usuario.h Vendedor.h  Administrador.h Venta.h DataBase.h main.cpp  
	g++ Consola.h Microsoft.h Nintendo.h Sony.h Videojuego.h Microsoftgame.h Sonygame.h Nintendogame.h Bandaigame.h Konamigame.h SquareEnixgame.h ElectronicArtgame.h Segagame.h Ubisoftgame.h Usuario.h Vendedor.h  Administrador.h Venta.h DataBase.h  main.cpp -c -std=c++11 -lboost_serialization

Consola.o:	Consola.cpp Consola.h
	g++ Consola.cpp -c -std=c++11 -lboost_serialization

Sony.o:	Sony.cpp Sony.h Consola.h
	g++ Sony.cpp -c -std=c++11 -lboost_serialization

Microsoft.o:	Microsoft.cpp Microsoft.h Consola.h
	g++ Microsoft.cpp -c -std=c++11 -lboost_serialization

Nintendo.o:	Nintendo.cpp Nintendo.h	Consola.h
	g++ Nintendo.cpp -c -std=c++11 -lboost_serialization

Usuario.o:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp -c -std=c++11

Administrador.o:	Administrador.cpp Administrador.h Usuario.h
	g++ Administrador.cpp -c -std=c++11

Vendedor.o:	Vendedor.cpp Vendedor.h Usuario.h
	g++ Vendedor.cpp -c -std=c++11 -lboost_serialization

Videojuego.o:	Videojuego.cpp Videojuego.h
	g++ Videojuego.cpp -c -std=c++11 -lboost_serialization

Microsoftgame.o:	Microsoftgame.cpp Microsoftgame.h Videojuego.h
	g++ Microsoftgame.cpp -c -std=c++11 -lboost_serialization

Sonygame.o: Sonygame.cpp Sonygame.h Videojuego.h
	g++ Sonygame.cpp -c -std=c++11 -lboost_serialization

Nintendogame.o:	Nintendogame.cpp Nintendogame.h Videojuego.h
	g++ Nintendogame.cpp -c -std=c++11 -lboost_serialization

Bandaigame.o:	Bandaigame.cpp Bandaigame.h Videojuego.h
	g++ Bandaigame.cpp -c -std=c++11 -lboost_serialization

Konamigame.o:	Konamigame.cpp Konamigame.h Videojuego.h
	g++ Konamigame.cpp -c -std=c++11 -lboost_serialization

SquareEnixgame.o:	SquareEnixgame.cpp SquareEnixgame.h Videojuego.h
	g++ SquareEnixgame.cpp -c -std=c++11 -lboost_serialization

ElectronicArtgame.o: ElectronicArtgame.cpp ElectronicArtgame.h Videojuego.h
	g++ ElectronicArtgame.cpp -c -std=c++11 -lboost_serialization

Segagame.o:	Segagame.cpp Segagame.h	Videojuego.h
	g++ Segagame.cpp -c -std=c++11 -lboost_serialization

Ubisoftgame.o:	Ubisoftgame.cpp Ubisoftgame.h Videojuego.h
	g++ Ubisoftgame.cpp -c -std=c++11 -lboost_serialization

DataBase.o:	DataBase.cpp DataBase.h
	g++ DataBase.cpp -c -std=c++11 -lboost_serialization

Venta.o:	Venta.cpp Venta.h Consola.h Videojuego.h
	g++ Venta.cpp -c -std=c++11
clean:
	rm *.o *.h.gch main 