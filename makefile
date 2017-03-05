main.sex: main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Videojuego.o Microsoftgame.o Sonygame.o Nintendogame.o
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
clean:
	rm *.o main