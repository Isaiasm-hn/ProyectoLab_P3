main.sex: main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o Bandaigame.o Konamigame.o SquareEnixgame.o ElectronicArtgame.o Segagame.o Ubisoftgame.o
	g++ main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o -o main
main.o:	main.cpp Includes.h
	g++ -c main.cpp 
Consola.o:	Consola.cpp Consola.h
	g++ -c Consola.cpp
Sony.o:	Sony.cpp Sony.h Consola.h
	g++ -c Sony.cpp
Microsof.o:	Microsof.cpp Microsof.h Consola.h
	g++ -c Microsof.cpp
Nintendo.o:	Nintendo.cpp Nintendo.h	Consola.h
	g++ -c Nintendo.cpp
Usuario.o:	Usuario.cpp Usuario.h
	g++ -c Usuario.cpp
Administrador.o:	Administrador.cpp Administrador.h Usuario.h
	g++ -c Administrador.cpp
Vendedor.o:	Vendedor.cpp Vendedor.h Usuario.h
	g++ -c Vendedor.cpp
Videojuego.o:	Videojuego.cpp Videojuego.h
	g++ -c Videojuego.cpp
Microsoftgame.o:	Microsoftgame.cpp Microsoftgame.h Videojuego.h
	g++ -c Microsoftgame.cpp
Sonygame.i: Sonygame.cpp Sonygame.h Videojuego.h
	g++ -c Sonygame.cpp
Nintendogame.o:	Nintendogame.cpp Nintendogame.h Videojuego.h
	g++ -c Nintendogame.cpp
Bandaigame.o:	Bandaigame.cpp Bandaigame.h Videojuego.h
	g++ -c Bandaigame.cpp
Konamigame.o:	Konamigame.cpp Konamigame.h Videojuego.h
	g++ -c Konamigame.cpp
SquareEnixgame.o:	SquareEnixgame.cpp SquareEnixgame.h Videojuego.h
	g++ -c SquareEnixgame.cpp
ElectronicArtgame.o: ElectronicArtgame.cpp ElectronicArtgame.h Videojuego.h
	g++ -c SquareEnixgame.cpp
Segagame.o:	Segagame.cpp Segagame.h	Videojuego.h
	g++ -c Segagame.cpp
Ubisoftgame.o:	Ubisoftgame.cpp Ubisoftgame.h Videojuego.h
	g++ -c Ubisoftgame.cpp
clean:
	rm *.o main