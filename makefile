main.sex: main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Modelos.o Metodos.o Videojuego.o
	g++ main.o Consola.o Sony.o Microsoft.o Nintendo.o Usuario.o Vendedor.o Administrador.o Modelos.o Metodos.o -o main
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
Modelos.o:	Modelos.cpp Modelos.h
	g++ -c Modelos.cpp
Metodos.o:	Metodos.cpp Metodos.h
	g++ -c Metodos.cpp
Videojuego.o:	Videojuego.cpp Videojuego.h
	g++ -c Videojuego.cpp
clean:
	rm *.o main